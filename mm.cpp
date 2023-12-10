#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int>&v)
    {
        map<int,int>m;
        for(int i=0;i<v.size();i++)
        {
            int x=v[i];
            m[x]++;
        }
        for(auto i:m)
        {
            if(i.second==1)
            {
                return i.first;
            }
        }

    }
};
int main()
{
    Solution g;
    vector<int>v={2,3,2,2};

    cout<<g.singleNumber(v);




}

