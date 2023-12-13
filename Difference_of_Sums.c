#include<stdio.h>

int main(){
    int n,sum_sq=0,sq_n_num=0,sum_n=0;
    scanf("%d",&n);
    int a=1;
    while(a<=n){
        sum_sq=sum_sq+a*a;
        sum_n=sum_n+a;
        a++;
    }
    sq_n_num=sum_n*sum_n;
    int diff=sq_n_num-sum_sq;
    printf("%d",diff);
}