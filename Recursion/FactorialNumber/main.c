#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
    if (n<=1)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}

int Ifact(int n)
{
    int result=1;
    int i;
    for (i=1;i<=n;i++)
    {
        result *=i;
    }
    return result;

}
int main()
{
    int r;
    r=fact(5);
    printf("%d\n",r);

    r=Ifact(5);
    printf("%d\n",r);

    return 0;
}
