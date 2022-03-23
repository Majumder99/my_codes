#include<bits/stdc++.h>
using namespace std;
long long MAX=1000000;
bool Siev(long long n)
{
    vector<long long>v;
    bool prime[MAX+1];
    long long i,j,k=1;
    for(i=3; i*i<=MAX; i+=2)
    {
        if(prime[i]==false)
        {
            for(j=i*i; j<=MAX; j+=i+i)
            {
                prime[j]=true;
            }
        }
    }
    v.push_back(2);
    for(i=3; i<=n; i+=2)
    {
        if(prime[i]==false)
        {
            v.push_back(i);
        }
    }
    for(i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long n;
    cin >> n;
    Siev(n);
    return 0;
}
