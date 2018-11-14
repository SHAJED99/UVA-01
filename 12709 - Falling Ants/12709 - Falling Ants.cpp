#include<stdio.h>

struct ant{
    double a, la, wa, ha;
};

int main()
{
    FILE *p;
    int t, c, e, m;
    double l, w, h, f=0, r, g, n;

    while(scanf("%d", &t)!=EOF && t!=0){
        c=0, e=0, n=0, m=0;
        struct ant AA[t];
        g=t;
    A:
        scanf("%lf%lf%lf", &l, &w, &h);
        f=((l*w*(h*g-(g/2)))/(l*w*h));
        AA[c].a=f;

        AA[c].la=l;

        AA[c].wa=w;

        AA[c].ha=h;

        c++;

    if(c<t) {goto A;}

    for(c=0; c<t; c++)
    {
        if(AA[c].a>n){n=AA[c].a;}
    }

    for(c=0; c<t; c++)
    {
        if(n==AA[c].a)
        {
            if(m<AA[c].la*AA[c].wa*AA[c].ha)
            {
                m=(int)(AA[c].la*AA[c].wa*AA[c].ha);
            }
        }
    }
    printf("%.d\n", m);

    }

    return 0;
}
