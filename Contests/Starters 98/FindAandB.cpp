#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int x,y,z;
    cin >> x >> y >> z;
    int a=-1,b=-1;
    b=x;
    a=y*z;
    if(a%b==0){
    cout<<a<<" "<<b<<endl;
    continue;
    }
    b=y;
    a=x*z;
    if(a%b==0){
    cout<<a<<" "<<b<<endl;
    continue;
    }
    b=z;
    a=y*x;
    if(a%b==0){
    cout<<a<<" "<<b<<endl;
    continue;
    }
    cout<<-1<<endl;
    }
    return 0;
}