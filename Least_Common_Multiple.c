#include<stdio.h>
int main(){
    int a,b,lcm,fact=1;
    scanf("%d%d",&a,&b);
    (a>b) ? lcm=a : lcm=b;
    while(fact){
        if(lcm%a==0 && lcm%b==0){
             printf("%d",lcm);
            fact=0;
        }
        lcm++;
    }
   
}