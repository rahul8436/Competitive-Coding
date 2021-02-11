#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll d1,d2,v1,v2,p;
        cin>>d1>>v1>>d2>>v2>>p;
        ll to=0,dt=1;
             while(to<p){
              if(dt>=d1) to=to+v1;
              if(dt>=d2) to=to+v2;
              dt++;
             }
             cout<<dt-1<<"\n";
	}
}
