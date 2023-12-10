#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            arr[i]=arr[i]*(-1);
        }
    }
    sort(arr,arr+n);
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
    cout<<arr[0];

}
