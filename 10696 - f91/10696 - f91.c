#include<stdio.h>
int main()
{
    long int x, y;
    while(scanf("%ld", &x)!=EOF && x!=0)
    {
        if(x>=101)
            y=x-10;
        else
            y=91;

        printf("f91(%ld) = %ld\n", x, y);
    }
    return 0;
}
