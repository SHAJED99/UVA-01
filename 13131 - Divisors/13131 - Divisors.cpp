#include<stdio.h>

int main()
{
    long long int t, c, s, e, m, r, d, mm;
    scanf("%lld", &t);

    for(c=1; c<=t; c++)
    {
        r=0, s=0, e=0, d=0, m=1;
        scanf("%lld%lld", &s, &e);

        mm=s/2;

        for(d=2; d<=mm; d++)
        {
            if(s%d==0) {m=s/d; break;}
        }

        for(d=1; d<=m;)
        {
            if(s%d==0)
            {
                if(d%e!=0) {r=r+d;}
                if(s%(d+1)!=0) d=d+d;
                else d++;
            }
            else d++;
        }

        if(s%e!=0) r=r+s;
        printf("%lld\n", r);
    }
}
