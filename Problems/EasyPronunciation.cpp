#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    int n;
	    cin>>n;
	    cin>>s;
	    int cons=0;
	    int flag=0;
	    for(int i=0;i<n;i++)
	    {
	        char ch=s[i];
	        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	        cons=0;
	        else
	        cons++;
	        
	        if(cons>=4){
	        flag=1;
	        cout<<"NO"<<endl;
	        break;
	        }
	    }
	    if(flag==0)
	    cout<<"YES"<<endl;
	}
	return 0;
}
