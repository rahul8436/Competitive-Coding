#include<bits/stdc++.h>
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);
#define nl "\n"
#define ll long long
using namespace std;

int main()
{
	IOS;
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
        int a,b,c;
        cin>>a>>b>>c;
        if(c==0)
        {
        	if(a>b)
        	{
        		cout<<"Takahashi";
        	}
        	else{
                cout<<"Aoki";
        	}
        }
        if(c==1)
        {
        	if(b>a)
        	{
        		cout<<"Aoki";
        	}
        	else{
                cout<<"Takahashi";
        	}
        }
}