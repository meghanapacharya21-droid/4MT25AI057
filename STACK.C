# include<stdio.h>
# define MAX 5

int a[MAX];
int top = -1;

void push();
void pop();
void peek();
void display();


int main (void)
{
    int choice;
    do{
    
    
    printf("The Stack Operations Are : ");
    printf("1.INSERT\n");
    printf("2.DELETE\n");
    printf("3.PEEK\n");
    printf("DISPLAY\n");
    printf("ENTER YOUR CHOICE : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting Program\n");
            break;
        default :
            printf("Invalid Choice\n");
    }

    }
        while(choice != 5);
        return 0;
        
}
void push() {
    int value;
    if (top == MAX - 1) {
        printf("stack overflow\n");
    } else {
        printf("enter the element into the stack : ");
        scanf("%d", &value);
        top++;             
        a[top] = value; 
        printf("%d successfully inserted.\n", value);
    }
}


void pop() {
    if (top == -1) {
        printf("stack underflow\n");
    } else {
        printf("Deleted element: %d\n", a[top]);
        top--; 
    }
}
  
void peek(){
    if(top == -1){
        printf("stack is empty\n");
    }
        else{
            printf("the value of stack is %d",a[top]);
        }
        
}


 void display(){
    if (top == -1) {
        printf("The stack is empty\n");
    }
    else {
        printf("Stack elements :\n");
            for (int i = top; i >= 0; i--) {
            printf("%d\n", a[i]);
            }
            printf("\n");
               
        }       
}
    

