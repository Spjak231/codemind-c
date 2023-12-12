#include<stdio.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n+1-row;col++){
            int alp=a+64+n-row;
            char d=(char)alp;
            printf("%c ",d);
        }
        printf("
");
    }
}