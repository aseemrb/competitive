/*
Author: aseemraj
Problem: twostr
*/

#include <bits/stdc++.h>
#define loop(i, a, b) for(int i=a; i<b; i++)
#define rloop(i, a, b) for(int i=b-1; i>=a; i--)
#define loopinc(i, a, b, inc) for(int i=a; i<b; i+=inc)
#define rloopdec(i, a, b, dec) for(int i=b-1; i>=a; i-=dec)
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
    // freopen("input.txt", "r", stdin);
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if((n&(n+1)) == 0)
        {
            if(n==1)
                cout<<"2\n";
            else
                cout<<(n>>1)<<"\n";
        }
        else
            cout<<"-1\n";
    }
    return 0;
}
