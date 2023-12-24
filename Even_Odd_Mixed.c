#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp=n;
    int count=0,even=0,odd=0;
    while(temp!=0){
        int r=temp%10;
        count++;
        temp=temp/10;
    }
    
    while(n!=0){
        int r=n%10;
        if(r%2==0){
            even++;
        }
        else{
            odd++;
        }
        n=n/10;
    }
    if(even==count){
        printf("Even");
    }
    else if(odd==count){
        printf("Odd");
    }
    else{
        printf("Mixed");
    }
}