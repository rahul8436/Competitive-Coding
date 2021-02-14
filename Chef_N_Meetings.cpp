#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int hour_calculate(string mt, int tm)
{
    int h;
    h = 10 *(mt[0 + tm] - '0') + 1* (mt[1 + tm] - '0');
    if(mt[6+tm] == 'P'){if(h != 12) h += 12;}
    if(mt[6 + tm] == 'A') {if(h == 12) h-= 12;}
    return h;
}
int min_calculate(string mt, int tm)
{
    int m;
    m = 10 *(mt[3 + tm] - '0') + (mt[4 + tm] - '0');
    return m;
}

int main()
{
    ll x;
    cin>>x;
    cin.ignore();
    while(x--)
    {
        string mt; getline(cin, mt);
        int h = hour_calculate(mt, 0);
        int m = min_calculate(mt, 0);
        ll aa; cin>>aa; cin.ignore();
        string answer = "";
        while(aa--)
        {
            string ftm; getline(cin, ftm);
            int a = hour_calculate(ftm, 0);
            int b = min_calculate(ftm, 0);
            int c = hour_calculate(ftm, 9);
            int d = min_calculate(ftm, 9);


            if((a> h)||(c< h)) 
            {
                answer.push_back('0');
            }
            else if(a == h && b> m) answer.push_back('0');
            else if(c == h && d< m) answer.push_back('0');
            else answer.push_back('1');
        }
        cout<<answer<<"\n";       
    }
    return 0;
}
