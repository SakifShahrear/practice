
#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int n,a=-1,b=0,c=0,d=0;
        cin>>n;
        int k=(n*(n+1))/2;
        int ar[n];
        vector<int>v;
        for(int i=0;i<n;i++)
            {
                int x;
                cin>>x;
                b=x;
                if(a!=b)
                {
                    v.push_back(x);
                    a=x;
                }
            }
        int l=v.size();
        cout<<l<<" "<<k<<endl;
        cout<<k-l-n;



    }

}
