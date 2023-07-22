#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    z=z/30;
	    x=x+z;
	    if(x%y!=0)
	    x=x/y+1;
	    else
	     x=x/y;
	    cout<<x<<endl;
	}
	return 0;
}
