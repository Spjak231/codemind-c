#include<stdio.h>
int main(){
    int a,b,big_num,i=1,gcd;
    scanf("%d%d",&a,&b);
    (a>b) ? big_num=a : big_num=b;
    while(i<=big_num){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
        i++;
        
    }
    printf("%d",gcd);
}