#include<string.h>
#include<stdio.h>
#define MAX 1000

int f1();

int main()
{
    int t, c1, r;
    scanf("%d", &t);
    for(c1=0; c1<t; c1++)
        if(c1==t-1) r=f1(), printf("%d\n", r);
        else r=f1(), printf("%d\n\n", r);
    return 0;
}

int f1()
{
    int c=1, d=0, e=0, r, l, circle;
    char s[MAX];
    scanf("%s", s);
    l=strlen(s);
    if(l==1) return 1;

A:
    for(; c<l; c++)
    {
        if(s[c]==s[0])
        {
            circle=c-1;
            c++;
            break;
        }
        else circle=-10;
    }
if(circle!=-10){
    for(d=0, e=circle+1; e<l; e++)
    {
        if(s[d]==s[e])
        {
            if(d<circle) d++;
            else d=0;
        }
        else goto A;
    }
}
    if(d!=0 || circle==-10) return l;
    else return circle+1;
}
