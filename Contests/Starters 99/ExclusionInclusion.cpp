#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    long sum=0;
        for (int i= 0;i< n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        cout<<sum<<" ";
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
        {
            sum=sum-arr[i];
            cout<<sum<<" ";
        }
        cout<<endl;
	}
	return 0;
}
