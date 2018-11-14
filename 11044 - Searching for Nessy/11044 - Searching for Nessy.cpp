#include<iostream>

using namespace std;

void sonar();

int main(){
    int c, d;
    cin>>d;
    for(c=0; c<d; c++) sonar();
    return 0;
}

void sonar(){
    int n, m;

    cin>>n>>m;
    cout<<(n/3)*(m/3)<<endl;
}
