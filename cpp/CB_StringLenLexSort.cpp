#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define ll long long int
#define mod 1000000007
#define infmax INT_MAX
#define infmin INT_MIN
#define loopf(i, a, b) for (int i = (a); i <= (b); i++)
#define loopb(i, a, b) for (int i = (a); i >= (b); i--)
#define t(x)  \
    int x;    \
    cin >> x; \
    while (x--)


bool compare(string a, string b)
{
    if(a.length()==b.length())
    {
        return a<b;
    }
    return a.length() < b.length();
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cin.get();
    string a[100];

    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }
    sort(a, a + n,compare);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}