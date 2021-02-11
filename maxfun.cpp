#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);
#define nl "\n"
#define ll long long int


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
        ll n,x = INT_MAX,y = INT_MIN;;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] < x)
            {
                x = a[i];
            }
            if(a[i] > y)
            {
                y = a[i];
            }
        }
        ll z = (y-x)*2;
        cout<<z<<nl;
    }
    return 0;
}