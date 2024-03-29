/*
Author: aseemraj
Problem: 100676c
*/

#include <bits/stdc++.h>
#define loop(i, a, b) for(int i=a; i<b; i++)
#define rloop(i, a, b) for(int i=b-1; i>=a; i--)
#define V(x) vector< x >
#define P(x, y) pair< x, y >
#define PI P(int, int)
#define PLL P(ll, ll)
#define VI V(int)
#define VLL V(ll)
#define VP V(PI)
#define ALL(c) c.begin(), c.end()
#define F first
#define S second
#define PB push_back
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t, k, n, m;
    cin>>t;
    while(t--)
    {
        cin>>k>>m>>n;
        int avail = k;
        VI a(n);
        loop(i, 0, n)
        {
            cin>>a[i];
            avail -= a[i];
        }
        sort(ALL(a), greater<int>());

        int i = 0;
        while(i<n && avail < m)
        {
            avail += a[i];
            i++;
        }
        cout<<i<<"\n";
    }
    
    return 0;
}
