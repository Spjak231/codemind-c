#include<stdio.h>

int main()
{

    int n,sum=0;
    scanf("%d",&n);
    int arr[n],i;
    // reading array
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int avg=sum/n,flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==avg){
            flag=1;
            printf("True");
            break;
        }
    }
    if(flag==0){
        printf("False");
    }

return 0;
}