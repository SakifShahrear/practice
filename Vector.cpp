///Vector
#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&v)
{
    cout<<"Use Funtion "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout<<v[0]<<endl;///index na thakle o gurbaje
                     ///value print krbe
                     ///but at function a eta krbe na
    cout<<v.at(1)<<endl;
    cout<<"Size "<<v.size()<<endl;
    cout<<"front "<<v.front()<<endl;
    vector<int>v2={6,8,56,5,6,9};
    vector<int >::iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    print(v);
    v.pop_back();
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    v.erase(v.begin()+1);///1 index number and delete this
    v.erase(v.begin()+3,v.end());///3 number index the last porjonto delete;
    v.insert(v.begin(),11);///insert begin
    v.insert(v.begin()+1,21);///insert any position
    v.insert(v.begin(),2,21);///insert any position 2 times
    v.insert(v.begin()+1,4,9);///insert any position 4 times and start 1 number index
    if(v.empty()) cout<<"EMPTY"<<endl;
    else cout<<"NOT EMPTY"<<endl;

    ///print first and last
    cout<<v.front()<<" "<<v.back()<<endl;
    /// v.clear() delete all element
    ///v.empty() with element or without element
    ///insert
    v.insert(v.begin(),5);
    ///insert any position use iterator
    vector<int >::iterator it1,it2;///time reduce
    it1=v.begin();
    cout<<"USE iteratir "<<*it1<<endl;
    it2=v.begin()+2;
    cout<<"USE iteratir "<<*it2<<endl;
    ///v.remove(2) value delete
    ///v.reverse() reverse hoye jabe
    ///v.sort() sort krbe
    swap(v,v2); ///swap exchange one list element to another
    sort(v.begin(),v.end()); ///increase order
    sort(v2.rbegin(),v2.rend());///decreasing order

    ///print by auto iterator
    for(auto it:v)
        cout<<it<<" ";
    cout<<endl;
    ///merge v2 is empty
    for(auto it:v2)
        cout<<it<<" ";
    cout<<endl;
    reverse(v.begin(),v.end()); ///first value last and last value first
    for(it1=v.begin();it1!=v.end();it1++)
        cout<<*it1<<" ";
    cout<<endl;
    v.clear();
    if(v.empty()) cout<<"EMPTY"<<endl;

    cout<<v.size()<<endl;


}

