#include <stdio.h>

int x=0;

int funGlobal(int n)
{
    if(n>0)
    {
        x++;
        return funGlobal(n-1)+x;
    }
    return 0;
}


int funStatic(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return funStatic(n-1)+x;
    }
    return 0;
}
int main()
{
    int r,g;
    //calling static variable function
    r=funStatic(5);
    printf("%d\n",r);

    r=funStatic(5);
    printf("%d\n",r);
    printf("\n");

    //calling Global variable function

    g=funGlobal(5);
    printf("%d\n",g);

    g=funGlobal(5);
    printf("%d\n",g);

    return 0;
}
