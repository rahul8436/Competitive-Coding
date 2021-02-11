#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t,n,k,d,x,res=0,ans=0,i=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>d;
		for(i=0;i<n;i++)
		{
			cin>>x;
			res+=x;
		}
		ans = res / k;
		if(ans>d)
		{
			ans=d;
		}
		cout<<ans<<endl;
	}
}
