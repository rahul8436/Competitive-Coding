#include <bits/stdc++.h>
using namespace std;

#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);
#define nl <<"\n"
#define ll long long
#define cer cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";


void solve()
{
    ll n,res = 0;
    cin>>n;
    string str[n],x,y;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    sort(str,str+n);
    for(int k=0;k<n;k++)
    {
        for(int l=k+1;l<n;l++)
        {
            x = str[k];
            y = str[l];
            swap(x[0],y[0]);
            if(x[0]==y[0])
            {

            }
            else if(x==y)
            {

            }
            else if((!(binary_search(str,str+n,x)))&&(!binary_search(str,str+n,y)))
            {
                res+=2;
            }
        }
    }
    cout<<res nl;
}


int main()
{
	IOS;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE	
    int t;
    cin>>t;
    while(t--)
    {
    	solve();
    }
	return 0;
	cer;
}