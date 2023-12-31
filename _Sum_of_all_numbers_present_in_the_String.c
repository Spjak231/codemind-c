#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%[^
]s",s);
    int sum=0;
    for(int i=0;s[i]!=NULL;i++){
        if(s[i]>=48 && s[i]<=57){
          sum=sum+(s[i]-48);
        }
    }
    printf("%d",sum);
}