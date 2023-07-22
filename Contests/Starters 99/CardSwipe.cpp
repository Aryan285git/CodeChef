#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    unordered_map<int, int> m;
	    int max2=0;
	    int max1=0;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        m[a]++;
	        if(m[a]&1)
	        max2++;
	        else
	        max2--;
	        max1=max(max2,max1);
	    }
	    cout<<max1<<endl;
	}
	return 0;
}
