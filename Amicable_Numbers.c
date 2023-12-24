#include<stdio.h>
int main(){
    int a,b,sum2=0;
    scanf("%d%d",&a,&b);
    for(int i=1;i<a && i<b;i++){
        
        if(b%i==0){
            sum2=sum2+i;
            
        }
    }
    if(sum2==a){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
    
}