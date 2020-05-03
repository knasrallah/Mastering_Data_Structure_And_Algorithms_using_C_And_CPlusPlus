#include <stdio.h>

int funHead (int n)
{
    if (n>0)
    {
        printf("%d ",n);
        funHead(n-1);
    }

    return 0;
}
int funTail (int n)
{
    if (n>0)
    {
        funTail(n-1);
        printf("%d ",n);
    }

    return 0;
}
int main()
{   int x = 3;
    funHead(x);
    printf("\n");
    funTail(x);
    return 0;
}
