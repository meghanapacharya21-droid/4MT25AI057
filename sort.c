#include <stdio.h>
int main(){
    int n,i,j,temp;
    //Read the size of the array
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    //Read array elements from the user
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
 }
    //Apply bubble sort logic
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                //Swap the adjacent elements if they are in wrong order
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    //print the sorted array
    printf("\nSorted array is :\n");
    for(i=0;i<n;i++){
    printf("%d",arr[i]);
    }
printf("\n");

return 0;
}