#include<stdio.h>
int main(){
    int N;
    char S[100];
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf(" %[^
]s",S);
        int count=0;
        
        for(int i=0;S[i]!=NULL;i++){
            if(S[i]>=48 && S[i]<=57){
                count++;
            }
        }
        if(count!=0){
            printf("Yes
");
        }
        else{
            printf("No
");
        }
    }
}