#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int f;
        cin>>f;
        
        int ans=1;
        if(f==0)
        {
			cout<<1;
		}
        while(f > 0){
            ans = ans*f;
            f = f-1;
        }
        
        cout<<ans<<"\n";
    }
}
