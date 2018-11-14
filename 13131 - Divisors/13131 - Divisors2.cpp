#include<stdio.h>

int main()
{
    long long int t, c, s, e, m, r, d, mm;
    scanf("%lld", &t);

    for(c=1; c<=t; c++)
    {
        r=0, s=0, e=0, m=0;
        scanf("%lld%lld", &s, &e);

        for(d=1; d*d<=s; d++)
        {
            if(s%d==0)
            {
                m=s/d;
                if(d%e!=0) r=r+d;
                if(m!=d && m%e!=0) r=r+m;

            }
        }
        printf("%lld\n", r);
    }
    return 0;
}
