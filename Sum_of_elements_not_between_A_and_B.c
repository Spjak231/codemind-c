#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    int arra[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arra[i]);
    }
    int sum=0;
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++){
        if(arra[i] < a || arra[i] > b){
            sum+=arra[i];
        }
    }
    printf("%d",sum);
}