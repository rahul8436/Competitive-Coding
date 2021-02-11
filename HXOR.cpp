#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/trie_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>



using namespace std;
using namespace __gnu_pbds;

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
        cs{
             ll i,j,s=0,c,k=0,q=0,m=0,e=-1,f=-1,x,y,ans=INF,p=0,r,a,b,d,len,n,ct=0;
             cin>>n>>k;
             vector<vector<ll> > dp(n,vector<ll>(35,0));
             vector<ll> v(n),chk(35,0);
             input(v);
             for(i=0;i<n;i++){
              ll jo=v[i];
              for(j=0;j<32;j++){
                if(jo%2==1) {dp[i][j]=1;}
                jo=jo/2;
              }
             }
             for(i=0;i<n-1;i++){
              for(j=31;j>=0;j--){
                if(dp[i][j]==1 && ct<k && chk[j]==0){
                  dp[i][j]=0;
                  ct++;
                  chk[j]=1;
                }
                else if(dp[i][j]==1 &&  chk[j]==1){
                  dp[i][j]=0;
                  chk[j]=0;
                }
              }
             }

             for(i=31;i>=0;i--){
              if(chk[i]==1){dp[n-1][i]=1-dp[n-1][i];}
             }
             if(ct<k && n==2){
              ll ex=k-ct;
              if(ex%2==1){dp[n-1][0]=1-dp[n-1][0];dp[n-2][0]=1;}
             }
             if(ct<k&& n>2){
              ll ex=k-ct;
              if(ex==1){dp[n-1][0]=1-dp[n-1][0];dp[n-2][0]=1;}

             }
             for(i=0;i<n;i++){
              ll s=0,p=1;
              for(j=0;j<32;j++){
                if(dp[i][j]==1) {s=s+p;}
                p=p*2;
              }
              cout<<s <<" ";
             }
             cout nl;

      }  
        //////////////////////////////////
        cer;
}
