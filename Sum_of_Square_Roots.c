#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    float sum=0;
    scanf("%d%d",&a,&b);
    int i=a;
    while(i<=b){
        float sq=sqrt(i);
        sum=sum+sq;
        i++;
    }
    printf("%0.2f",sum);
    
}