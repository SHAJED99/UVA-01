#include<stdio.h>

int main()
{
    long int n, i;
    long int x[32];
    x[0]=1;

    for(i = 1; i<32; i++)
        x[i]=x[i-1]*2;

    while(scanf("%ld", &n)!=EOF)
    {
        for(i=0; i<32; i++)
        {
            if(n<x[i])
                {
                    printf("%ld\n", i);
                    break;
                }
        }
    }

    return 0;
}

