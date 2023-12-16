#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int l,r,count=0;
        scanf("%d  %d",&l,&r);
        for(int i=l;i<=r;i++){
            int rev=i%10;
            if(rev==2 || rev==3 || rev==9){
               count++;
            }
            
        }
        printf("%d
",count);
    }
}