#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col_num=1;col_num<=n+1-row;col_num++){
            printf("%d",col_num);
        }
        for(int col_star=1;col_star<=row-1;col_star++){
            printf("*");
        }
        printf("
");
    }
}