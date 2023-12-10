///MUltiSET
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///same value thakbe na sob unique value

    cout<<"Multi_SET"<<endl;///low to high
    multiset<int>s;
    ///multiset<int>s={11,12,13};
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(39);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(1);///same element nibe;
    s.insert(1);
    cout<<"SIZE "<<s.size()<<endl;
    multiset<int>::iterator it,it1;
    for(it=s.begin();it!=s.end();it++)///begin first element ke point korbe
    cout<<*it<<" ";
    cout<<endl;
   auto it2=s.lower_bound(2);///present thakle 2 er first index ke print krbe na
    /// thakle tar theke boro value ke point korbe;
    /// 2 er theke boro element na thakle end ke point korbe
    if(it2==s.end())
    {
        cout<<"NAI"<<endl;
    }
    else cout<<"The position not index is : "<<*it2<<endl;
    it2=s.lower_bound(3);///present thakle 2 er index ke print krbe na
    /// thakle tar theke boro ke point korbe;
    /// 2 er theke boro element na thakle end ke point korbe
    if(it2==s.end())
    {
        cout<<"NAI"<<endl;
    }
    else cout<<"The position not index is : "<<*it2<<endl;
    it2=s.lower_bound(40);///present thakle 2 er index ke print krbe na
    /// thakle tar theke boro ke point korbe;
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
    cout<<"Koto bar ache "<<s.count(1)<<endl;
    s.erase(2); ///2 thekle all 2 erase hoye jabe
    for(auto itt:s) cout<<itt<<" ";
    cout<<endl;
    auto ite1=s.begin();

    s.erase(ite1);///first index delete;
    for(auto itt:s) cout<<itt<<" ";
    cout<<endl;
//    advance(ite1,3);///2 number index delete;
//    s.erase(ite1);

    for(auto iit:s)
        cout<<iit<<" ";
    cout<<endl;



    if(s.empty()) cout<<"EMPTY"<<endl;
    else cout<<"Not Empty"<<endl;

    multiset<int,greater<int>>ss;///high to low
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

