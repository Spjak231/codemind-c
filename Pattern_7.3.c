#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col_space=1;col_space<=row-1;col_space++){
            printf(" ");
        }
        for(int col_alp=n+1-row;col_alp>=1;col_alp--){
            
            printf("%d ",col_alp);
        }
        
        printf("
");
    }
}