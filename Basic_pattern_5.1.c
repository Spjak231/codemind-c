#include<stdio.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col_num=1;col_num<=row;col_num++){
            printf("%d",a);
        }
        a++;
        for(int col_star=1;col_star<=n-row;col_star++){
            printf("*");
        }
        printf("
");
    }
}