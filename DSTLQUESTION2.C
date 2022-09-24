#include<stdio.h>
#include<conio.h>
int main(){
    int arr[100],element,i;
    printf("enter the 5 element");
    for( i=0;i<5;i++)
        scanf("%d",&arr[i]);

        printf("enter the element to store");
        scanf("%d",&element);
        arr[i]=element;
       printf("\nThe New Array is:\n");
    for(i=0; i<6; i++)
        printf("  %d   ", arr[i]);
return 0;
}


