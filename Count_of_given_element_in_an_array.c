#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int z;
    scanf("%d",&z);
    for(int i=0;i<n;i++){
        if(z==arr[i]){
            count++;
        }
    }
    printf("%d",count);

    
}