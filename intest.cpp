#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int total;
	for(int i=0;i<n;i++)
	{
		long long int t;//as the range is 10^9-10, I have taken long long instead of int
		cin>>t;
		if(t%k==0)
		{
			total++;
		}
		else
		{
			total=total;
		}
	}
	cout<<total<<"\n";
}
