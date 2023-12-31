#include<stdio.h>

int main()
{

    char str1[10],str2[10];
    scanf("%[^
]s",str1); 
    for(int i=0;str1[i]!=NULL;i++){
        if(str1[i]>=65 && str1[i]<=90){
            str1[i]=str1[i]+32;
        }
        
    }
    
    printf("%s",str1);

return 0;
}