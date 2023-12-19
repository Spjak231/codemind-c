#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int last_odd;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            last_odd=i;
        }
    }
    printf("%d",last_odd);
}