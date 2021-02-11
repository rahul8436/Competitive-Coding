#include<bits/stdc++.h>

using namespace std;


typedef long long ll;
/*
 execution in cmd for windows: g++ p1.cpp -op1
  
  
  p1

  execution in terminal for linux: g++ p1.cpp
  
  
  ./a.out
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
const ll MOD = 1000000007;
#define pi 3.14159265
#define io { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
#define cer cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#define cs ll t;cin>>t;while(t--)
#define cs1 ll t;t=1;while(t--)
#define input(v) for(i=0;i<v.size();i++) cin>>v[i];
#define output(v) for(i=0;i<v.size();i++) cout<<v[i]<<" ";
#define dbg(n) cout<<"[ "<<n<<" ]" nl;



int main()
{
  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
  
        io;
        //////////////////////////////////
        
        cs{
             ll i, j, s = 0, c, k = 0, q = 0, o=0,  m = 0, e = -1, x, y, f=-1, ans = INF, p = 0, r=0, a, b, d=0, len, ct = 0, id, n;
             cin>>n;
             vll vw(n),vl(n);
             input(vw);
             input(vl);
             vector<vector<ll> > v;
             for(i=0;i<n;i++){
              v.pb({vw[i],i+1,vl[i]});
             }
             fsort(v);
             ll lp=-1;
             for(i=0;i<n;i++){
              if(v[i][1]>lp){
                lp=v[i][1];
              }
              else{
                ll dis=lp-v[i][1]+1;
                ll x=dis/v[i][2];
                if(dis%v[i][2]!=0) x++;
                s=s+x;
                lp= v[i][2]*x+v[i][1];
              }
             }
             cout<<s nl;


      }  
        //////////////////////////////////
        cer;
            

}