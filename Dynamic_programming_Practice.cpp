#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int INF = 2e9;
int h[N],dp[N];

int main()
{

    int n,k;
    cin>>n>>k;
    for(int i= 1;i<=n;i++)
    {

        cin>>h[i];
    }
    dp[1] = 0;
    for(int i=2;i<=n;i++)
    {
      dp[i] = INF;

    }
}
