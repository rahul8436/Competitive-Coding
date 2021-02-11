#include <bits/stdc++.h>
using namespace std;

#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);
#define nl "\n"
#define ll long long
#define cer cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";


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
    	cout<<"9";
    		ll a = 8;
    		for(int i=0;i<n-1;i++)
    		{
    			cout<<a;
    			if(a<9)
    				a++;
    			else
    				a=0;
    		}
    		cout<<nl;
    }
	return 0;
	cer;
}