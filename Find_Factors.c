#include <stdio.h>
int main()
{
    int n, i=1;
    scanf("%d", &n);
    i = 1;
    while(i <= n)
    {
          if (n % i == 0)
           {
            printf("%d ", i);
        }
          i++;
     }
}