#include<stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    float avg=sum/(float)n;
    printf("%.2f",avg);
}
    