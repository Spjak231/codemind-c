#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%[^
]s",s);
    int count=0;
    for(int i=0;s[i]!=NULL;i++){
        count++;
    }
    printf("%d",count);
}