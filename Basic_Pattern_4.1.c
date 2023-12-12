#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        (row%2!=0) ? a=0:a=1;
        for(int col=1;col<=n;col++){
            printf("%d ",a);
        }
        printf("
");
    }
}