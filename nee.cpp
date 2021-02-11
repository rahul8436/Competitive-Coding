#include<iostream>
using namespace std;



int main()
{
    long long num;
    long long rem;
    cin>>num;
    while(num>0)
    {
        rem= num %10;
        if(rem==7)
        {
            cout<<"YES"<<endl;
            num= num/10;
        }
        cout<<"NO"<<endl;
    }
}
