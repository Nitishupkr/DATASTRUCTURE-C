
#include<stdio.h>
#include<stdio.h>

void main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[10],b[10],c[10],i,k=0,flag=0;
    printf("enter the value of a");
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the value of b");
    for(int i =0;i<n;i++){
        scanf("%d",&b[i]);

    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(b[i]=a[j]){
            flag = 1;
}
}
if(flag == 1)
{
printf("%d ", b[i]);
}
flag = 0;
}
return 0;
}




