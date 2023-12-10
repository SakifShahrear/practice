///MAP & MULTiMAP
#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m)
{
    cout<<"Function call Size "<<m.size()<<endl;
    for(auto it:m)
    cout<<it.first<<" "<<it.second<<endl;///key wise sort
}
int main()
{
    cout<<"MAP unique key thakbe"<<endl<<endl;
    map<int,int>m1,m;///pair hishebe value thake
                ///1st ta key 2nd ta key er value
                ///by default value zero 00000
    map<char,char>c1;
    c1['a'].push_back('b');
    c1[a1].push_back(b1);
    c1[a2].push_back(b2);
    for(auto it: c1)
        cout<<it.first<<" "<<it.second<<endl;
    m1.insert({1,10});
    m1.insert({5,50});
    m1.insert({2,20});
    m1.insert({3,30});
    m1.insert({4,40});
    m1.insert({1,100}); ///update hobe na ja ache tai thakbe
   /// m1[1]=100;///value change hoye jabe
    m1[6]=60;///another way for insertion
    m1[7]=70;
    cout<<m1[1]<<endl;///1 key jar value print korbe
    cout<<m1.at(6)<<endl;///at operator use
    cout<<"SIZE "<<m1.size()<<endl;

    for(auto it: m1)
        cout<<it.first<<" "<<it.second<<endl;///key wise sort
    m=m1;
    cout<<"equal operator"<<endl;
    for(auto it: m)
        cout<<it.first<<" "<<it.second<<endl;///key wise sort
    map<int,int>:: iterator it;
///    ///iterator use kore print
///    for(it=m1.begin();it!=m1.end();it++)
///        cout<<it->first<<" "<<it->second<<endl;
    m1.erase(5);///key er value delete hoye jabe with key
    auto itt=m1.find(2);
    if(itt!=m1.end()) cout<<"Find"<<endl;
    else cout<<"Not Find"<<endl;
    auto it44=m1.lower_bound(1);///thakle tar address ke point korbe na paile
                                ///tar theke boro value ke
    cout<<"lower value "<<(*it44).first<<" "<<(*it44).second<<endl;
    auto it4=m1.lower_bound(5);
    cout<<"lower value "<<(*it4).first<<" "<<(*it4).second<<endl;
    auto it5=m1.upper_bound(3);///key thakle tar theke boro take point korbe
    cout<<"Upper value "<<(*it5).first<<" "<<(*it5).second<<endl;
    m1.clear(); ///delete all;
    if(m1.empty()) cout<<"EMPTY"<<endl;
    else cout<<"Not Empty"<<endl;
    map<int,string>m2;
    m2.insert({1,"ab"});
    m2.insert({2,"abc"});
    m2.insert({3,"abd"});
    m2.insert({4,"aba"});
    print(m2);///function call;
    map<string,int>m3;
    m3.insert({"ab",1});
    m3.insert({"bc",2});
    m3.insert({"dv",3});
    m3.insert({"abc",4});
    for(auto it:m3)
    cout<<it.first<<" "<<it.second<<endl;///key wise sort

    cout<<"MultiMap same key multiple time thakle input nibe";
    cout<<" value update hobe na"<<endl<<endl;
    multimap<int,int>mp1;
    ///mp[i]=0///kaj korbe na map a kaj korto
    mp1.insert({1,10});///sort hoye jabe
    mp1.insert({2,10});
    mp1.insert({3,10});
    mp1.insert({1,500});
    mp1.insert({7,10});
    mp1.insert({2,40});
    mp1.insert({4,150});

    for(auto it:mp1)
        cout<<it.first<<" "<<it.second<<endl;
    cout<<"key count "<<mp1.count(1)<<endl;///ekta key koto bar ache;
    cout<<"After erase"<<endl;
    mp1.erase(2);///all key contain 2 are deleted
    for(auto it:mp1)
        cout<<it.first<<" "<<it.second<<endl;
        cout<<"particuler index delete"<<endl<<endl;
    auto it9=mp1.begin();
    advance(it9,3);///3 number index a je thakbe se delete not whole key
    mp1.erase(it9);
    for(auto it:mp1)
        cout<<it.first<<" "<<it.second<<endl;


}
