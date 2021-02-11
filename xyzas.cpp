#include <iostream>
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);
#define nl "\n"
#define ll long long
using namespace std;

int main()
{
    IOS;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s.length() > 10)
        {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << nl;
        }
        else
        {
            cout << s << nl;
        }
    }
    return 0;
}