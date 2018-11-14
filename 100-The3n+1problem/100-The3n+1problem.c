#include<stdio.h>

int main()
{
    long int x, y, c=0, n, t, m, s, e;
    while(scanf("%ld %ld", &x, &y)==2 && x>0 && y>0)
    {
    printf("%ld %ld", x, y);
    if(x<y)
    {
        s=x;
        e=y;
    }
    else
    {
        s=y;
        e=x;
    }
    m=0;
    t=s;
B:
    if(t<=e)
    {
        n=t;
    A:
        c=c+1;
        if(n==1)
        {
            if(m<c)
                m=c;
            t++;
            c=0;
            goto B;
        }

        if(n%2!=0)
            n=(3*n)+1;
        else
            n=n/2;

        goto A;
    }
    printf(" %ld\n", m);
    }
    return 0;
}

