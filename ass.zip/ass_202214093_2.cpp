#include<bits/stdc++.h>
using namespace std;
struct value
{
    int element;
    int key;
};

class Heap{
private:
    struct value a[101];
    int size;

public:
    Heap(){
        size = 0;
    }

private:
    void bottomTopAdjust(int i){
        while(i!=1)
        {
            if(a[i].key>a[i/2].key)
                swap(a[i],a[i/2]);
            else
                break;
            i=i/2;
        }

    }

    void topBottomAdjust(int i){    /// HEAPIFY!
        int pseudoRoot=a[i].key;
        int pseudoIdx=i;
        while(i<=size/2)
        {
            int leftVal=a[2*i].key;
            int maxIdx=2*i;
            if((2*i+1)<=size && a[2*i+1].key>leftVal)
                maxIdx=2*i+1;
            if(a[i].key<a[maxIdx].key)
            {
                swap(a[i],a[maxIdx]);
            }
            else
            {
                break;
            }
            i=maxIdx;
        }

    }

public:
    bool insert(int val,int k){
         if(size>101)
        {
            return 0;
        }
        else
        {
            size++;
            a[size].element = val;
            a[size].key = k;
            bottomTopAdjust(size);
            return 1;

        }
    }
    bool increaseKey(int x, int k)
    {
        a[x].key = k;
        bottomTopAdjust(x);
        return true;
    }
    struct value showMax(){
        return a[1];
    }

    int showSize(){
        return size;
    }

    int extractMax(){

        swap(a[1],a[size]);
        int x = a[size].element;
        size--;
        topBottomAdjust(1);
        return x;
    }

    void bfs(){
        if(size==0) return;
        int level = 2;
        queue<int>q;
        q.push(1);

        while(!q.empty()){
            int parent = q.front();
            q.pop();
            if(parent==level){
                cout<<endl;
                level = level * 2;
            }
            cout<<"Value: "<<a[parent].element<<" "<<" Priority: "<<a[parent].key<<" ";
            if(2*parent <= size) q.push(2*parent);
            if(2*parent + 1 <= size) q.push(2*parent + 1);
        }
    }
};

int main(){

    Heap heap;

    while(1){
        cout<<"1. Insert    2. Increase Key    3. Show Max    4.Show Size  5. Extract Max 6. Level Order Traversal 7.End"<<endl<<endl;
        int choice;
        cin>>choice;

        if(choice==1){
            cout<<"Insert Value: ";
            int y;
            cin>>y;
            cout<<"Insert Priority: ";
            int k;
            cin>>k;
            bool b = heap.insert(y,k);

            if(b)   cout<<y<<" is inserted in the Priority Queue with a priority of "<<k<<endl;
        }
        else if(choice==2){
            cout<<"Which node you want to increase?"<<endl;
            int nodeNo;
            cin>>nodeNo;
            cout<<"What will be the new key?"<<endl;
            int k;
            cin>>k;
            bool b=heap.increaseKey(nodeNo,k);
            if(b) cout<<"Node key increased successfully!"<<endl;
            else cout<<"Unsuccessful Operation :("<<endl;
        }
        else if(choice==3){

            if(heap.showSize()!=0)
            {
                struct value max_ = heap.showMax();
                cout<<"Max Element: "<<max_.element<<"\n";
                cout<<"Max Element's Priority: "<<max_.key<<"\n";
            }
            else    cout<<"No element in the Queue"<<endl;
        }

        else if(choice==4){
            if(heap.showSize()!=0)  cout<<"Priority Queue Size: "<<heap.showSize();
            else    cout<<"No element in the queue"<<endl;
        }

        else if(choice==5){
            if(heap.showSize()!=0)  cout<<"Max element extracted: "<<heap.extractMax();
            else    cout<<"No element in the queue"<<endl;
        }

        else if(choice==6){
           cout<<"Level Wise Traversal of the Queue:"<<endl;
           heap.bfs();
           cout<<endl;
        }
        else if(choice==7)
            break;
        else{
            cout<<"Invalid Choice"<<endl;
        }
        cout<<endl;
    }
}

/*
1 2
1 9
1 8
1 16
1 3
1 7
1 10
1 1
1 4
1 14
*/





