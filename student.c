# include<stdio.h>
int main(){
    int first,i,n;
    char students[100][50];
    //input the total number of students
    printf("Enter the number of students in the list : ");
    scanf("%d",&n);
    //input the names of the the students
    printf("Enter the student names:\n");
    for(i=0;i<n;i++)
    {
        printf("Student %d name :",i+1);
        scanf("%s",students[i]);
    }
    //input the list of first n students to be displayed
    printf("Enter the number of students to be displayed : ");
    scanf("%d",&first);
    //display only first n number of students
    printf("\nFirst %d students are:\n",first);
    for(i=0;i<first;i++)
    {
        printf("%s\n",students[i]);
    }
    return 0;
}

