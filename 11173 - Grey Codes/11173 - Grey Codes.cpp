#include<iostream>
#include <math.h>

using namespace std;

int dectobin(int);
int bintogray(int);
int bintodec(int);
int pow1(int, int);

int re[999];

int main(){
    int c, d, dec, bin, gray, o;
    cin>>d;
    for(c=0; c<d; c++) cin>>o>>dec, bin=dectobin(dec), gray=bintogray(bin), cout<<bintodec(gray)<<endl;
    return 0;
}

int dectobin(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * dectobin(dec / 2));
    }
}

int bintogray(int bin)
{
    int a, b, result = 0, i = 0;

    while (bin != 0)
    {
        a = bin % 10;
        bin = bin / 10;
        b = bin % 10;
        if ((a && !b) || (!a && b))
        {
            result = result + pow1(10, i);
        }
        i++;
    }
    return result;
}

int bintodec(int gray)
{
    int  num, decimal_val = 0, base = 1, rem;
    num=gray;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    return decimal_val;
}

int pow1(int x, int p)
{
    int c, res=1;
    for(c=1; c<=p; c++)
    {
        res=res*x;
    }
    return res;
}

