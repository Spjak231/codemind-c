#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    
    int count=0;
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++){
        if(array[i] < a || array[i] > b){
           count++;
        }
    }
    
    
    
    if(count>0){
        for(int i=0;i<n;i++){
            if(array[i] < a || array[i] > b){
                printf("%d ",array[i]);
            
            }
        }
        
    }
    else{
       printf("-1");
    }
    
}