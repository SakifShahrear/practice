///SET
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///same value thakbe na sob unique value

    cout<<"SET"<<endl;///low to high
    set<int>s;
    ///set<int>s={11,12,13};
    s.insert(1);
    s.insert(2);
    s.insert(39);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(1);///same element nibe na;
    s.insert(1);
    cout<<"MAX_SIZE "<<s.max_size()<<endl;
    cout<<"SIZE "<<s.size()<<endl;
    set<int>::iterator it,it1,it2;
    for(it=s.begin();it!=s.end();it++)///begin first element ke point korbe
    cout<<*it<<" ";
    cout<<endl;
    it2=s.lower_bound(2);///present thakle 2 er index ke print krbe
    /// na thakle tar theke boro ke point korbe;
    /// 2 er theke boro element na thakle end ke point korbe
    if(it2==s.end())
    {
        cout<<"NAI"<<endl;
    }
    else cout<<"The position not index is : "<<*it2<<endl;
    it2=s.lower_bound(3);///present thakle 2 er index ke print krbe
    /// na thakle tar theke boro ke point korbe;
    /// 2 er theke boro element na thakle end ke point korbe
    if(it2==s.end())
    {
        cout<<"NAI"<<endl;
    }
    else cout<<"The position not index is : "<<*it2<<endl;
    it2=s.lower_bound(40);///present thakle 2 er index ke print krbe
    /// na thakle tar theke boro ke point korbe;
    /// 2 er theke boro element na thakle end ke point korbe
    if(it2==s.end())
    {
        cout<<"NAI"<<endl;
    }
    else cout<<"The position not index is : "<<*it2<<endl;
    it2=s.upper_bound (2);///je value deoya hobe tar theke boro element ke point korbe

    /// na thakle tar theke boro ke point korbe;
    /// 2 er theke boro or same element na thakle end ke point korbe
    if(it2==s.end())
    {
        cout<<"NAI"<<endl;
    }
    else cout<<"The position not index is : "<<*it2<<endl;
    it2=s.upper_bound (3);///je value deoya hobe tar theke boro element ke point korbe

    /// na thakle tar theke boro ke point korbe;
    /// 2 er theke boro or same element na thakle end ke point korbe
    if(it2==s.end())
    {
        cout<<"NAI"<<endl;
    }
    else cout<<"The position not index is : "<<*it2<<endl;

    s.erase(2); ///2 thekle 2 erase hoye jabe
    it1=s.begin();

    s.erase(it1);///first index delete;
    advance(it1,2);///2 number index delete;
    s.erase(it1);

    for(auto iit:s)
        cout<<iit<<" ";
    cout<<endl;


    if(s.empty()) cout<<"EMPTY"<<endl;
    else cout<<"Not Empty"<<endl;

    set<int,greater<int>>ss;///high to low
    ss.insert(1);
    ss.insert(2);
    ss.insert(3);
    ss.insert(4);
    ss.insert(5);
    ss.insert(1);
    ss.insert(1);

    for(auto itt:ss) cout<<itt<<" ";
    cout<<endl;
    ss.clear(); ///delete all;
    if(ss.empty()) cout<<"EMPTY"<<endl;
    else cout<<"Not Empty"<<endl;

}
