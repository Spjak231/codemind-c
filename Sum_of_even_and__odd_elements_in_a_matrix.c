#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum1=0,sum2=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j]%2==0){
                sum1=sum1+arr[i][j];
            }
            else{
                sum2=sum2+arr[i][j];
            }
            
        }
    }
    printf("%d %d",sum1,sum2);
}