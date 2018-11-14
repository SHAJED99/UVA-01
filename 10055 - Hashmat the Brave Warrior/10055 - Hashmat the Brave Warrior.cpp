#include<iostream>

using namespace std;

int main()
{
    long int a, b;
    while((cin>>a>>b)){
        if(a>b)cout<<a-b<<endl;
        else cout<<(-1)*(a-b)<<endl;
    }
    return 0;
}
