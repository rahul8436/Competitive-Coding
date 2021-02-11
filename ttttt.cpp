#include <bits/stdc++.h>
using namespace std;

#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);
#define nl "\n"
#define ll long long 
#define vl vector<ll>
#define x(v) v.begin(), v.end()
#define vsort(v) sort(x(v))
#define lp ll t;cin>>t;while(t--)
const int mx = 1000000;
int px[mx + 1];

void isprime()
{
    bool p[mx + 1];
    memset(p, true, sizeof(p));

    for(int i = 2; i * i <= mx; i++)
    {
        if(p[i] == true)
        {
            for(int k = i * 2; k<= mx; k+= i)
            {
                p[k] = false;
            }
        }
    } 
    px[0] = 0;
    px[1] = 0;
    for(int i = 2; i<= mx; i++)
    {
        px[i] = px[i-1];
        if(p[i]) px[i]++;
    }
}
int prime_count(long x)
{
	return px[x];
}

int main()
{
    
    IOS;
    /* #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE */
    isprime();
    
    lp{
        long m,n;
        cin>>m>>n;
        if(prime_count(m)>n)
        {
            cout<<"Divyam"<<nl;
        }else
        {
            cout<<"Chef"<<nl;
        }
    }
    return 0;
}
