#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int a[3];
		for(int i=0;i<3;i++)
		{
			cin>>a[i];
		}
		int max=0;int min=a[2];
		for(int i=0;i<3;i++)
		{
			if(max<a[i])
				max=a[i];
			if(min>a[i])
				min=a[i];
		}
		for(int i=0;i<3;i++)
		{
			if(max!=a[i]&&min!=a[i])
			cout<<a[i]<<endl;
		}
	}
}