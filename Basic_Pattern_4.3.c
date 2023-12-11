#include<stdio.h>
int main(){
    int n,a=0;
    // printf("enter a number : ");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        a=0;
        for(int col=1;col<=n;col++){
            if(a==0){
                a=1;
                printf("%d ",a);
            }
            else{
                a=0;
                printf("%d ",a);
            }
            
        }
        
        printf("
");
    }
}