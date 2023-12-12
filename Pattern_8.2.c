#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            if((row==col) || (row+col==n+1)){
            //if((row==col) || (row==1 && col==n) || (col==1 && row==n) || (row+col==n+1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("
");
    }

}