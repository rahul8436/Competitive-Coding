#include<bits/stdc++.h>




using namespace std;

typedef long long ll;
/*
 execution in cmd of windows: g++ p1.cpp -op1
  
  
  p1
 
 */
typedef long double dd;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define nl <<"\n"
#define con continue
#define br break
#define vll vector<ll>
#define vpll vector<pair<ll,ll> >
ll mx=INT_MAX;
ll mi=INT_MIN;
#define mem0(a)         memset(a,0,sizeof(a))
#define mem1(a)         memset(a,-1,sizeof(a))
#define all(v) v.begin(), v.end()
#define fsort(v) sort(all(v))  
#define rsort(v) sort(v.rbegin(),v.rend())
#define rev(v) reverse(all(v))
#define maxc(v) max_element(all(v))
#define minc(v) min_element(all(v))
#define sumv(v,x) accumulate(v.begin(),v.end(),x);
const ll mod = 1000000007;
const ll inf = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3fLL;
const ll MOD = 1e9+7;
#define io { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
#define cer cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#define cs ll t;cin>>t;while(t--)
#define cs1 ll t;t=1;while(t--)
#define input(v) for(i=0;i<v.size();i++) cin>>v[i];
#define output(v) for(i=0;i<v.size();i++) cout<<v[i]<<" ";

int main()
{
    #ifndef ONLINE_JUDGE
        ifstream cin("in.in");
        ofstream cout("out.out");
    #endif

        io;
        //////////////////////////////////
        cs1{
             ll i,j,s=0,c,k=0,q=0,m=0,e=-1,f=-1,x,y,ans=INF,p=0,r,a,b,d,len,n,ct=0;
             ll d1,d2,v1,v2;
             cin>>d1>>v1>>d2>>v2>>p;
             ll to=0,dt=1;
             while(to<p){
              if(dt>=d1) to=to+v1;
              if(dt>=d2) to=to+v2;
              dt++;
             }
             cout<<dt-1 nl;

      }
      
        
        //////////////////////////////////
        cer;
            

}
