#include<stdio.h>
int main(){
    int n,count=0,i=1;
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            count++;
        }
        i++;
    }
    if(count==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}