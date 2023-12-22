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
    
    
    int min=0;
    if(count>0){
        for(int i=0;i<n;i++){
            if(array[i] < a || array[i] > b){
                if(min<array[i]){
                    min=array[i];
                    
                }
            
            }
        }
        printf("%d",min);
        
    }
    else{
       printf("-1");
    }
    
}