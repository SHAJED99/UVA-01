#include<stdio.h>
#include<math.h>
int main()
{
    long int t, n, k, c, L, d;
    double l, m;
    scanf("%ld", &t);
    for(c=1; c<=t; c++)
    {
        d=1;
        if(scanf("%ld %ld", &n, &k)!=EOF && n<=2147483647 && k<=10000000)
        {
            l=log10(n)*k;
            l=l-(int)l;

            m=pow(10,l);
            L=m*100;
            printf("%ld", L);

            n=n%1000;
            while(k>0)
            {
                if(k&1)
                    d=(d*n)%1000;
                n=(n*n)%1000;
                k=k>>1;
            }
            printf("...%03ld\n", d);
        }

    }
}
