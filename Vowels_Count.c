#include<stdio.h>
int main(){
    char s[100];
    scanf("%[^
]s",s);
    int v=0;
    for(int i=0;s[i]!=NULL;i++){
        if(s[i]=='a' || s[i]=='A'|| s[i]=='E'|| s[i]=='e'  || s[i]=='i' || s[i]=='I' ||s[i]=='o'  ||s[i]=='O' || s[i]=='u' ||s[i]=='U' ){
            v++;
            
            
        }
    }
    printf("%d",v);
}