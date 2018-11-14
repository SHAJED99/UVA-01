#include<iostream>

using namespace std;

int main()
{
    long long int t;

    cin>>t;

    for(long long int c=1; c<=t; c++)
    {
        long long int s, e, r=0;
        cin>>s>>e;

        if(s%2==0) {s++;}

        for(long long int d=s; d<=e; d=d+2)
        {
            r=r+d;
        }

        cout<<"Case "<<c<<": "<<r<<endl;
    }
    return 0;
}
