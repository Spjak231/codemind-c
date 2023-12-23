#include<stdio.h>
int main(){
    int n,rev_num=0;
    scanf("%d",&n);
    while(n!=0){
        int rev=n%10;
        rev_num=rev_num*10+rev;
        n=n/10;
    }
    printf("%hd",rev_num);
}