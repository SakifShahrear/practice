///Queue FIFO Fast in first out
///deque
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<endl;
    cout<<"Queue"<<endl;
    queue<int>q,q1;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    cout<<"SIZE "<<q.size()<<endl;
    if(q.empty()) cout<<"EMPTY"<<endl;
    else cout<<"Not Empty"<<endl;
    cout<<"front "<<q.front()<<endl;
    cout<<"last "<<q.back()<<endl;
    q.pop();///First value delete
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    q1.push(61);
    q1.push(72);
    q1.push(18);
    swap(q,q1);
        while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<endl;
    cout<<"Deque"<<endl;
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    cout<<"front "<<dq.front()<<endl;
    cout<<"last "<<dq.back()<<endl;
    cout<<"SIZE "<<dq.size()<<endl;
    dq.push_front(4);
    for(int i=0;i<dq.size();i++)
        cout<<dq[i]<<" ";
        ///cout<<dq.at(i)<<endl;
    cout<<endl;
    dq.pop_front();///delete first element;
    dq.pop_back();///delete last element
    deque<int>::iterator dit,dit1,dit2;
    dit2=dq.begin();
    dq.insert(dit2,2);
    dq.insert(dq.begin(),11);///insert begin
    dq.insert(dq.begin()+1,21);///insert any position
    dq.insert(dq.begin(),2,21);///insert any position 2 times
    dq.insert(dq.begin()+1,4,9);///insert any position 4 times and start 1 number index
    dit=dq.begin();
    dit1=dq.begin()+2;
    dq.erase(dit,dit1);
    dq.clear(); /// all delete
    if(dq.empty()) cout<<"EMPTY"<<endl;
    else cout<<"Not Empty"<<endl;\
    cout<<endl;
    cout<<"Priorty Queue"<<endl;

    priority_queue<int>pq;///high value to low
    pq.push(11);
    pq.push(15);
    pq.push(16);
    pq.push(12);
    pq.push(14);
    pq.push(13);

    cout<<"SIZE "<<pq.size()<<endl;
    cout<<"front "<<pq.top()<<endl;
    pq.pop(); ///high value delete;

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    ///priority Queue high to low by default;
    ///queue and priority queue deference priority high the low
    ///or low theke high data ney but queue ta kore na
    priority_queue<int,vector<int>,greater<int>>ppq;
    ///low to high
    ppq.push(1);
    ppq.push(5);
    ppq.push(6);
    ppq.push(2);
    ppq.push(4);
    ppq.push(3);
    while(!ppq.empty())
    {
        cout<<ppq.top()<<" ";
        ppq.pop();
    }
    cout<<endl;
    if(pq.empty()) cout<<"EMPTY"<<endl;
    else cout<<"Not Empty"<<endl;
    ///stack LIFO last in first out;
    ///like a plate
    cout<<endl<<"Stack"<<endl;
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<"SIZE "<<st.size()<<endl;
    cout<<"front "<<st.top()<<endl;///last in in the top;
    st.pop(); ///top a je thakbe se delete;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    if(st.empty()) cout<<"EMPTY"<<endl;
    else cout<<"Not Empty"<<endl;

}
