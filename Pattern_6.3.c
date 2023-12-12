#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=n;row>=1;row--){
        for(int col_space=1;col_space<=row-1;col_space++){
            printf(" ");
        }
        
        for(int col=row;col<=n;col++){
            printf("%d ",col);
        }
        
        printf("
");
    }
}