#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col_num=1;col_num<=row;col_num++){
            printf("%d",col_num);
        }
        for(int col_star=1;col_star<=n-row;col_star++){
            printf("*");
        }
        printf("
");
    }
}