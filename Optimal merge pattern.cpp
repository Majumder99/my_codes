#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>>a;//Auto increasing order
    priority_queue<int>pq;//Auto decreasing order
    int sum=0,cnt=0,i,j,k,l,n,t;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> t;
        a.push(t);
    }
    for(i=0; i<n-1; i++)
    {
        sum=0;
        sum+=a.top();
        a.pop();
        sum+=a.top();
        a.pop();
        cnt+=sum;
        a.push(sum);
    }
    cout << cnt << endl;
    return 0;
}
