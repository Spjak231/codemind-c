#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col_space=1;col_space<=n-row;col_space++){
            printf(" ");
        }
        for(int col_alp=1;col_alp<=row;col_alp++){
            int alp=65+n-row;
            char d=(char)alp;
            printf("%c ",d);
        }
        
        printf("
");
    }
}