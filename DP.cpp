#include<bits/stdc++.h>
using namespace std;
int dp[2000][2000];
int c,n;
int p[2000],w[200];
int knapsack(int i,int j)
{
    if(i<0|| j<0)
        return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int x=knapsack(i-1,j),x2=-1;
    if(w[i]<=j) x2=p[i]+ knapsack(i-1,j-w[i]);
    return dp[i][j]=max(x,x2);
}
int main()
{
    cin>>c>>n;
    for(int i=0;i<n;i++)
        cin>>w[i]>>p[i];
    for(int i=0;i<2000;i++)
    {
        for(int j=0;j<2000;j++)
            dp[i][j]=-1;
    }
    cout<<knapsack(n-1,c)<<endl;
}
