/*
Author: aseemraj
Problem: XRMTRX
*/

#include<bits/stdc++.h>
#define loop(i, a, b) for(int i=a; i<b; i++)
#define rloop(i, a, b) for(int i=b-1; i>=a; i--)
#define V(x) vector< x >
#define P(x, y) pair< x, y >
#define PI P(int, int)
#define PLL P(ll, ll)
#define VI V(int)
#define VLL V(ll)
#define VP V(PI)
#define F first
#define S second
#define PB push_back
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    
    int t;
    ll l, r, c, tl, tr;
    cin>>t;
    while(t--)
    {
        cin>>tl>>tr;
        c = tl^tr;
        l = c&tl, r = c&tr;
    }

    return 0;
}
