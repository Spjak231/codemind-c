#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int total=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        total=total+arr[i];
    }
    int count=0;
    int avg=total/n;
    for(int i=0;i<n;i++){
        if(arr[i]>=avg){
            count++;
        }
    }
    printf("%d",count);
    
}