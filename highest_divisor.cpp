#include <bits/stdc++.h>
using namespace std;

#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);
#define nl <<"\n"
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
    
    int n,k;
    cin>>n;
    for(k=10;k>0;k--)
    {
        if(n%k==0)
        {
            break;
        }
    }
    cout<<k nl;
	return 0;
	cer;
}