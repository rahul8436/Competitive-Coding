#include <bits/stdc++.h>
using namespace std;

#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);
#define nl "\n"
#define ll long long


int main()
{
	/* code */
	IOS;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE	
    
    int t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n%2==0)
        {
            cout<<"1"<<nl;
        }
        else {
            cout<<"0"<<nl;
        }
    }
	return 0;
}