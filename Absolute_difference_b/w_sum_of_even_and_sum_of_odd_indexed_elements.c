#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum1=sum1+arr[i];
        }
        else{
            sum2=sum2+arr[i];
        }
    }
    int d;
    (sum1>sum2) ? d=sum1-sum2 : d=sum2-sum1;
    printf("%d",d);
}