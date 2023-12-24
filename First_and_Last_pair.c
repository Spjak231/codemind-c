#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if((n%2==0)){
    for(int i=0;i<n;i++){
        for(int j=n-1-i;j>i;j--){
            printf("%d %d ",arr[i],arr[j]);
            break;
        }
    }
    }
    else{
        for(int i=0;i<n;i++){
        for(int j=n-1-i;j>i;j--){
            printf("%d %d ",arr[i],arr[j]);
            break;
        }
        
        }
        printf("%d 0",arr[(n)/2]);
    }
}