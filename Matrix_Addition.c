#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int array1[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&array1[i][j]);
        }
    }
    
    int c,d;
    scanf("%d%d",&c,&d);
    int array2[c][d];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&array2[i][j]);
        }
    }
    
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
           printf("%d ",array1[i][j]+array2[i][j]) ;
        }
        printf("
");
            
    }
    
    
}