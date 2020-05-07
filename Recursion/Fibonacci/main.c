#include <stdio.h>
#include <stdlib.h>
int F[10] ={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int fib (int n)
{
    if (n<=1)
    {
        return n;
    }
    else
    {
        return fib(n-2) + fib (n-1);
    }
}
int Ifib(int n)
{
    int S=0,i,t0=0,t1=1;
    if (n ==0)
        return t0;
    else if (n == 1)
        return t1;
    else
    {
        for (i =2;i<=n;i++)
        {
            S = t0 + t1;
            t0=t1;
            t1=S;
        }
        return S;
    }
}
int Mfib(int n)
{
    if (n<=1)
    {
        F[n]=n;
        return n;
    }
    else
    {
        if (F[n-2]==-1)
            F[n-2] = Mfib(n-2);

        if (F[n-1]==-1)
            F[n-1] = Mfib(n-1);
        return F[n-2] + F[n-1];

    }
}
int main()
{
    printf("%d\n",fib(10));
    printf("%d\n",Ifib(10));
    printf("%d\n",Mfib(10));
    return 0;
}
