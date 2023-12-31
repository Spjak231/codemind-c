#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%[^
]s",s);
    int len=0;
    for(int i=0;s[i]!=NULL;i++){
        len++;
    }
    int i=0,j=len-1,temp;
    while(i<=j){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    printf("%s",s);
}