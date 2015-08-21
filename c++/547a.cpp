/*
Author: aseemraj
Problem: 547A
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

map<PI, bool> d;
int main()
{
    ios_base::sync_with_stdio(0);
    ll m, h1, h2, x1, x2, y1, y2, a1, a2;
    cin>>m;
    cin>>h1>>a1>>x1>>y1>>h2>>a2>>x2>>y2;
    d[PI(h1, h2)] = 1;
    int ans = 0;
    while(1)
    {
        h1 = x1*h1 + y1;
        h2 = x2*h2 + y2;
        if(h1>=m)h1%=m;
        if(h2>=m)h2%=m;
        ans++;
        if(h1==a1 && h2==a2)
        {
            break;
        }
        if(d[PI(h1, h2)])
        {
            cout<<h1<<h2<<"\n";
            ans = -1;
            break;
        }
        d[PI(h1, h2)] = 1;;
    }
    cout<<ans<<"\n";
    return 0;
}
