#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll i, n, j;
    cin >> n;
    vector<ll>v;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    auto last=unique(v.begin(),v.end());
    v.erase(last,v.end());
    for(ll i : v)
    {
        cout << i << " ";
    }
    return 0;
}
