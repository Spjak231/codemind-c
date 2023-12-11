#include<stdio.h>
int main(){
    int n;
    int a=1;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            int alp=a+64;
            char d=(char)alp;
            printf("%c ",d);
        }
        a++;
        printf("
");
        
    }
}