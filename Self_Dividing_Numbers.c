#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        int temp=i;
      while(temp!=0){
          int dig=temp%10;
          if(dig==0 || i%dig!=0){
              break;
          }
          temp=temp/10;
      }
        if(temp==0){
            printf("%d ",i);
        }
    }
    
}