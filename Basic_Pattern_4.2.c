#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        if(row%2!=0){
            a=1;
        }
        else{
            a=0;
        }
        for(int col=1;col<=n;col++){
            printf("%d ",a);
        }
        printf("
");
    }
}