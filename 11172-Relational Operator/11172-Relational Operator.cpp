#include<iostream>

using namespace std;

void relation();

int main(){
    int c, n;
    cin>>n;
    for(c=0; c<n; c++){relation();}
    return 0;
}

void relation(){
    long int a, b;
    cin>>a>>b;
    if(a>b){cout<<">\n";}
    else if(a<b){cout<<"<\n";}
    else{cout<<"=\n";}
}
