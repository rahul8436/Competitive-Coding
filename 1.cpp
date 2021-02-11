#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,sum1=0,sum2=0;
        cin>>n>>x;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            long long p = ceil(arr[i]/x);
            sum1 += p;
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum2 += (arr[i]+x-1)/x;
        }
        cout<<sum1<<"\t"<<ceil(sum2+x-1/x); 
    }

}
