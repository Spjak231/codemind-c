#include<stdio.h>
#include<string.h>
int main(){
    char S[100];
    scanf("%[^
]s",S);
    int count=0;
    for(int i=0;S[i]!=NULL;i++){
        if(S[i]>=65 && S[i]<=90){
            count++;
        }
    }
    printf("%d",count);
}