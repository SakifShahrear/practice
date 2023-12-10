///pair
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p;
    p.first=10;
    p.second=20;
    p={2,50};

    cout<<p.first<<" "<<p.second<<endl<<endl;
    pair<int,int> p1[4];
    p1[0]={1,2};
    p1[1]={3,4};
    p1[2]={5,6};
    p1[3]={7,8};
    for(int i=0;i<4;i++)
    {
        cout<<p1[i].first<<" "<<p1[i].second<<endl;
    }
    swap(p1[1],p1[3]);
    cout<<"After swaping "<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<p1[i].first<<" "<<p1[i].second<<endl;
    }

}
