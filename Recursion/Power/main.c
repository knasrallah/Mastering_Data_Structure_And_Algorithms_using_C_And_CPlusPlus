#include <stdio.h>
#include <stdlib.h>
int pow(int m,int n)
{
    if (n == 1)
    {
        return m;
    }
    else if (n%2==0)
    {
        return pow(m*m,n/2);
    }
    else
    {
        return m*pow(m*m,(n-1)/2);
    }
}
int pow1(m,n)
{
    if (n==1)
    {
        return m;
    }
    else
    {
        return m*pow(m,n-1);
    }
}
int main()
{
    int r;
    r=pow(2,9);
    printf("%d\n",r);

    r=pow1(2,9);
    printf("%d\n",r);
    return 0;
}
