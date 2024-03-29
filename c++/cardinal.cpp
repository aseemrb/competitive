/*
Author: aseemraj
Problem: cardinal
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

int dp[105][1024][2];
int a[105];

int mask(int n)
{
    int ret = 0;
    while(n)
    {
        if((ret & 1<<(n%10)) == 0)
            ret += 1<<(n%10);
        n /= 10;
    }
    return ret;
}

int main()
{
    // ios_base::sync_with_stdio(0);
    int n, m;
    while(scanf("%d", &n) != EOF)
    {
        loop(i, 0, n)
            scanf("%d", &a[i]);

        loop(j, 0, 1024)
        {
            dp[0][j][0] = 0;
            dp[0][j][1] = 0;
        }

        int maxsum = 0, maxcard = 0;

        m = mask(a[0]);
        dp[0][m][0] = a[0];
        dp[0][m][1] = 1;

        loop(i, 1, n)
        {
            m = mask(a[i]);
            loop(j, 0, 1024)
            {
                dp[i][j][0] = dp[i-1][j][0];
                dp[i][j][1] = dp[i-1][j][1];
            }

            loop(j, 0, 1024)
            {
                if(j==0 || ((j & m) == 0 && dp[i][j][1] > 0))
                {
                    if(dp[i-1][j][0] + a[i] > dp[i][j|m][0])
                    {
                        dp[i][j|m][0] = dp[i-1][j][0] + a[i];
                        dp[i][j|m][1] = dp[i-1][j][1] + 1;
                    }
                    else if(dp[i][j][0] + a[i] == dp[i][j|m][0])
                    {
                        dp[i][j|m][1] = max(dp[i][j|m][1], dp[i][j][1] + 1);
                    }
                }
            }
        }

        loop(j, 0, 1024)
        {
            if(dp[n-1][j][0] > maxsum)
            {
                maxcard = dp[n-1][j][1];
                maxsum = dp[n-1][j][0];
            }
            else if(dp[n-1][j][0] == maxsum)
                maxcard = max(maxcard, dp[n-1][j][1]);
        }
        printf("%d\n", maxcard);
    }

    return 0;
}
