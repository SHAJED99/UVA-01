#include<iostream>

using namespace std;

void dectobin(int);
void bintogray();
int bintodec();
int pow1(int, int);

int bin[99];
int siz;

int main(){
    int c, d, dec, gray, o;
    cin>>d;
    for(c=0; c<d; c++) cin>>o>>dec, dectobin(dec), bintogray(), cout<<bintodec()<<endl;
//    for(c=siz-1; c>=0; c--)
//    {
//        cout<<bin[c];
//    }
    return 0;
}

void dectobin(int x){
    int y, c=0;

    y=x;

    while(x>0)
    {
        x=x/2;
        c++;
    }

    int t=c, a[c];
    c=0;
    x=y;
    while(x>0)
    {
        a[c]=x%2;
        x=x/2;
        c++;
    }

    for(c=t-1; c>=0; c--) bin[c]=a[c];

    siz=t;
}

void bintogray(){
    int c;
    int tem, re[siz];
    re[siz-1]=bin[siz-1];

    for(c=siz-2; c>=0; c--)
    {
        tem=bin[c]+bin[c+1];
        if(tem>1) tem=0;
        re[c]=tem;
    }

    for(c=siz-1; c>=0; c--)
    {
        bin[c]=re[c];
    }

}

int bintodec(){
    int c, re=0;
    for(c=0; c<siz; c++)
    {
        re=re+(bin[c]*pow1(2, c));
    }
    return re;
}

int pow1(int x, int p){
    int c, res=1;
    for(c=1; c<=p; c++)
    {
        res=res*x;
    }
    return res;
}


