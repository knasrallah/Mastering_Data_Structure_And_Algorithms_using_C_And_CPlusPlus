#include <stdio.h>
#include <stdlib.h>
double taylor (int m,int n)
{
    static double fact = 1;
    static double power = 1;
    double result =0;
    if (n==0)
    {
        return 1;
    }
    else
    {
        result = taylor(m,n-1);
        fact   *= n;
        power  *= m;
        result += power/fact;
        return result;
    }
}
double taylorHoner(int m,int n)
{
    static double S;
    if (n==0)
        return S;
    else
    {
        S =1 + ((double)m/n)*S;
        return taylorHoner(m,n-1);
    }
}
int main()
{
    double r = taylor (4,15);
    printf("%lf\n",r);

    r = taylorHoner (4,15);
    printf("%lf",r);
    return 0;
}
