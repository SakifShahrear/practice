
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int Eow;
    Node *children[30];
    Node()
    {
        Eow=0;
        for(int i=0;i<26;i++)
            this->children[i]==NULL;
    }
};
void insert_tie(Node *root, string s)
{
    Node *u=root;
    for(int k=0;k<s.length();k++)
    {
        int r=s[k]-65;
        if(u->children[r]== NULL)
            u->children[r]=new Node();
        u=u->children[r];


    }
    u->Eow += 1;
}
void remove_edge(Node *u,char c,int d)
{
    if(d==0) return ;
    int r=c-65;
    Node *v=u->children[r];
    u->children[r]=NULL;
    delete v;
}
bool isLeaf(Node *u)
{
    for(int i=0;i<26;i++)
    {
        if(u->children[i]!= NULL) return false;
    }
    return true;
}
bool isJun(Node *u)
{
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(u->children[i]!= NULL) c++;
    }
    if(u->Eow>0 || c>1)
        return true;
    return false ;
}
int del(Node *root, string s, int k)
{
    Node *u=root;
    if(u==NULL)
        return 0;
    if(k==s.length())
    {
        if(u->Eow==0) return 0;
        if(isLeaf(u)==false)
        {
            u->Eow=0;
            return 0;
        }
        return 1;
    }
    int r=s[r]-65;
    int d=del(u->children[r],s,k+1);
    int j=isJun(u);
    remove_edge(u,s[k],d++);
    if(j==1)
        d=0;
    return d;
}
int trie_search(Node * root,string s,int k)
{
    Node *u=root;
    if(u==NULL) return 0;
    if(k==s.length())
    {
        return u->Eow;
    }
    int r=s[k]-65;
    return trie_search(u->children[r],s,k+1);
}
void print(Node *root, string s="")
{
    Node *u=root;
    if(u->Eow>0) cout<<s<<endl;

    for(int i=0;i<26;i++)
    {
        if(u->children[i]!=NULL)
        {
            char c= char(i+65);
            print(u->children[i],s+c);
        }

    }
}

int main()
{
    Node *root=new Node();

    while(1)
    {
        cout<<"1. Insert    2. Search    3. Delete   4. Lexicographical Sorting  5. Display Strings  6. End"<<endl<<endl;
        int choice;
        string x;
        cin>>choice;
        if(choice==1)
        {
            cout<<"Insert String: ";
            cin>>x;
            insert_tie(root,x);
            cout<<x<<" is inserted in the trie"<<endl;
        }
        else if(choice==2){
            cout<< "Enter string to search: ";
            cin>>x;
            if(trie_search(root,x,0)>0)  cout<<x<<" FOUND "<<endl;
            else    cout<<x<<" NOT FOUND "<<endl;
        }
        else if(choice==3){
            string s;
            cout << "string to delete:";
            cin >> s;
            del( root,s,0);
        }
        else if(choice==4){
             print(root);
        }
        else if(choice==5){
             print(root);
        }
        else if(choice==6){
            break;
        }
        else
        {
            cout<<"Invalid Choice"<<endl;
            break;
        }
        cout<<endl;
    }


}
