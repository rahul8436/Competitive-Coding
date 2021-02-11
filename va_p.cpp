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
    
    int v,t,s,d;
    cin>>v>>t>>s>>d;
    if(v*t > d || v*s < d)
    {
        cout<<"Yes";
    }
    else
        cout<<"No";
    return 0;
}