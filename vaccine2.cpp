#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
	{
	    long long n,d;
	    long long diff = n - d;
	    long long x = 1;
	    cin >>n>>d;
	    long long arr[n];
	    for(int i=0;i<n;i++)
		{
	        arr[i] = i+1;
	    }
	    for(int i=0;i<diff;i++)
		{
	        if(x>n){
	            if(n%2==0){
	                x = n;
	            }else{
	                x = n-1;
	            }
	            for(int j=i;j<diff;j++){
	                arr[x-1] *= (-1);
	                x -= 2;
	            }
	            break;
	        }
	        arr[x-1] *= (-1);
	        x += 2;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout << arr[i] << " ";
	    }
	    cout << "\n";
    }
    return 0;
}