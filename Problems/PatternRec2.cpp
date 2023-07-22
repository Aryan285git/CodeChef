#include <iostream>
using namespace std;
void printn(int n)
{
	if(n==1)
	{
		cout<<1<<endl;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	printn(n-1);
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;

}
int main()
{
	printn(6);
}