#include<stdio.h>
int main(){
    char s1[100];
    scanf("%[^
]s",s1);
    int max=s1[0];
    for(int i=0;i<s1[i]!=NULL;i++){
        if(max<s1[i]){
            max=s1[i];
        }
    }
    printf("%c",max);
    
}