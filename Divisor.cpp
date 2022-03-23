///What is the total divisor of N number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,div=0;
    cin >> n;
    for(i=1; i*i<=n; i++)
    {
        if(i*i==n)
        {
            div++;
        }
        else if(n%i==0)
        {
            div+=2;
        }
    }
    cout << div << endl;
    return 0;
}
