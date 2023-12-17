#include<stdio.h>
#include<math.h>
int main(){
    int num,temp;
    int sum=0,count=0,rev;
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    temp=num;
    while(temp!=0){
        rev=temp%10;
        sum=sum+pow(rev,count);
        temp=temp/10;
        count--;
    }
    if(sum==num){
        printf("True");
    }
    else{
        printf("False");
    }
    
    
}