#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n+1-row;col++){
            printf("* ");
        }
        printf("
");
    }
}