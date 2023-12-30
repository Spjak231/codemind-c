#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    scanf("%[^
]s",s1);
    for(int i=0;s1[i]!=NULL;i++){
        s2[i]=s1[i];
    }
    printf("%s",s2);
}