///list or single linked list
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);
    li.push_back(6);
    list<int>li2={6,8,56};
    list<int >::iterator it;
    for(it=li.begin();it!=li.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    ///insert begin
    li.push_front(4);
    ///print first and last
    cout<<li.front()<<" "<<li.back()<<endl;
    ///pop use delete element
    li.pop_front();///first
    li.pop_back();///last
    cout<<"size "<<li.size()<<endl;///size print
    ///li.clear() delete all element
    ///li.empty() with element or without element
    ///insert
    li.insert(li.begin(),5);
    ///insert any position use iterator
    list<int >::iterator itt,it1,it2;
    itt=li.begin();
    it1=li.begin();
    it2=li.begin();
    advance(itt,3); ///any position a insert

    li.insert(itt,55);
    advance(it1,1);
    advance(it2,2);
    li.erase(it1,it2);
    ///li.remove(2) value delete
    ///li.reverse() reverse hoye jabe
    ///li.sort() sort krbe
    li2.swap(li); ///swap exchange one list element to another

    li.merge(li2);

    ///print by auto iterator
    for(auto it:li)
        cout<<it<<" ";
    cout<<endl;
    ///merge li2 is empty
    for(auto it:li2)
        cout<<it<<" ";
    cout<<endl;


}
