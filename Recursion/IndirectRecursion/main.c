#include <stdio.h>
#include <stdlib.h>
int funA(int);
int funB(int);
int funA(int n)
{
    if (n>0)
    {
        printf("%d \n",n);
        funB(n-1);
    }
}
int funB(int n)
{
    if(n>1)
    {
        printf("%d \n",n);
        funA(n/2);
    }
}
int main()
{
    funA(20);
    return 0;
}
