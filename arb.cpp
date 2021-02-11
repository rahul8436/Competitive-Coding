#include<iostream>
using namespace std;

int main()
{


	long long n,k;
	cin>>n>>k;
	long long cnt = 0;
	long long arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]%k==0 && k!=0)
		{
			cnt++;
		}
	}
	cout<<cnt;
}
