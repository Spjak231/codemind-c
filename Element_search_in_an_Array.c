#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    int i=0;
    int flag=1;
    while(i<=n){
        if(a==arr[i]){
            
            flag=0;
            break;
        }
        i++;
    }
    if(flag==0){
        printf("True");
        
    }
    else{
        printf("False");
    }
    
}