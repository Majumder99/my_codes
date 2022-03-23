#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main()
{
    ll n,i,j,a,b,x,y,rem=0;
    cin >> a >> b;
    if(a<b)
    {
        x=b;
        y=a;
    }
    else
    {
        x=a;
        y=b;
    }
    while(y!=0)
    {
        rem=x%y;
        x=y;
        y=rem;
    }
    cout << x << endl;
    return 0;

}
