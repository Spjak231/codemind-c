#include<stdio.h>
int main(){
    char s[100];
    int count=0;
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++){
        if((s[i]>=65 && s[i]<=90) && i > 0){
            count++;
        }
    }
    printf("%d",count + 1);
}