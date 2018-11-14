#include<stdio.h>
#include<string.h>
int main()
{
    char d[7];
    long int T, k, r=0, c;

    while(scanf("%ld", &T)==1 && T>=1 && T<=100)
    {
        for(c=0; c<T; c++)
        {
            scanf("%s", d);
            if(!strcmp(d, "donate"))
            {
                scanf("%ld", &k);
                r=r+k;
            }
            else if(!strcmp(d, "report"))
            {
                printf("%ld\n", r);
            }
        }

    }
    return 0;
}
