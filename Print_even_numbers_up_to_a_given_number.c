#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int i=a;
    /*for(int i=a;i<=b;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }*/
    while(i<=b){
        if(i%2==0){
            printf("%d ",i);
        }
        i++;
        
    }
    
}