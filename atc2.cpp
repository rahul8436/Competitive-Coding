#include<bits/stdc++.h>
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);
#define nl <<"\n"
#define ll long long
using namespace std;

int main()
{
	IOS;
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int n,s,d,flag = 0,x,y;
    cin>>n>>s>>d;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (x < s && y > d) flag = 1;
    }
    if(flag == 1)
    {
        cout<<"Yes" nl;
    }    
    else{
        cout<<"No" nl;
    }
}