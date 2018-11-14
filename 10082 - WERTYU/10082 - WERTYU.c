#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n;
    char c2[999999];
    char c1[]="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";

    while(gets(c2))
    {
        n=strlen(c2);

        for(i=0; i<n; i++)
        {
            for(j=0; j<47; j++)
            {
                if(c1[j]==c2[i])
                {
                    printf("%c", c1[j-1]);
                    break;
                }
                else if(c2[i]==' ')
                {
                    printf(" ");
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;

}
