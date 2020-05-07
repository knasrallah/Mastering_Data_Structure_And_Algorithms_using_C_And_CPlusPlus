#include <stdio.h>
#include <stdlib.h>
int sum (int n)
{
    if (n<1)
    {
        return 0;
    }
    else
    {
        return sum(n-1) + n ;
    }
}
int Isum(int n)
{
    int S=0;
    int i;
    for (i=1;i<=n;i++)
    {
        S+=i;
    }
    return S;
}
int main()
{

    int r;
    r=sum(5);
    printf("%d\n",r);

    r=Isum(5);
    printf("%d\n",r);
    return 0;
}
