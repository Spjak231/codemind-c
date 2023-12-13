#include<stdio.h>
int main(){
    int a,b,hig_num,i=1,gcd;
    scanf("%d%d",&a,&b);
    (a>b) ? hig_num=a : hig_num=b;
    while(i<=hig_num){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
        i++;
    }
    printf("%d",gcd);
}