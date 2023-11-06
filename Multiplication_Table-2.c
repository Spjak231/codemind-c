#include<stdio.h>
int main(){
    int n,b,i;
    scanf("%d%d",&n,&b);
    for (i=1;i<=b;i++){
        printf("%d x %d = %d
",n,i,n*i);
    }
}