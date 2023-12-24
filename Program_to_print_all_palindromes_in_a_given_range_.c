#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    
    for(int i=a;i<=b;i++){
        int temp=i;
        int rev_n=0;
        while(temp!=0){
            int rev=temp%10;
            rev_n=rev_n*10+rev;
            temp=temp/10;
        }
        if(rev_n==i){
            printf("%d ",i);
        }
    }
}