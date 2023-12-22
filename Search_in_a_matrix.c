#include<stdio.h>
int main(){
    int n,m,x;
    scanf("%d",&n);
    scanf("%d",&m);
    int array[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&array[i][j]);
        }
    }
   
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(array[i][j]==x){
                count++;
            }
            
        }
    }
    if(count==0){
        printf("0");
    }
    else{
        printf("1");
    }
}