#include<stdio.h>
#include<string.h>

int main()
{

    char s[100];
    scanf("%[^
]s",s);
    int len=strlen(s);
    printf("%d",len);

return 0;
}