#include<stdio.h>

int main()
{
    int a,b,s,l, i;
    scanf("%d %d", &a, &b);

    if(a>b)
    {
        l=a;
        s=b;
    }
    else
    {
            l=b;
            s=a;
    }



    for(i=s; i>=1 ; i--)
    {
        if(a%i==0 && b%i==0)
        {
            printf("GCD is %d", i);
            break;
        }
    }
}








