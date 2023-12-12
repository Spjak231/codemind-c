#include<stdio.h>
int main(){
    int n;
    // printf("enter a number ");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        int a=1;
        for(int col=1;col<=n+1-row;col++){
            int alp =a+64;
            char d= (char)alp;
            printf("%c ",d);
            a++;
        }
        printf("
");
    }
}