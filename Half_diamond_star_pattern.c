#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int m=1;
    if(a>=3){
    for(int i=1;i<=a;i++){
         for(int k=1;k<=m;k++){
            printf("*");
        }
        m++;
        
        for(int j=1;j<=a-i;j++){
            printf("");
        }
        printf("
");
    }
    for(int i=1;i<a;i++){
        for(int k=1;k<=a-i;k++){
            printf("*");
        }
         for(int j=1;j<=i-1;j++){
         printf("");
        }
        printf("
");
    }
    }
    else{
        printf("The pattern is not possible");
    }
}