#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int EoW;
    Node *children[26];
    Node()
    {
        EoW=0;
        for(int i=0;i<26;i++)
        {
            this->children[i]=NULL;
        }
    }
};
void trie_insert(Node *root, string s)
{
    Node *u=root;
    for(int k=0;k<s.length();k++)
    {
        int r=s[k]-65;
        if(u->children[r]==NULL)
        {
            u->children[r]=new Node();
        }
        u=u->children[r];
    }
    u->EoW=u->EoW+1;
    cout<<u->EoW<<endl;


}
int trie_search(Node *root, string s,int k=0) //k is the index
{
    Node *u=root;
    if(u==NULL)
        return 0;
    if(k==s.length())
        return u->EoW;
    int r=s[k]-65;
    return trie_search(u->children[r],s,k+1);

}

bool isLeaf(Node *u)
{
    for(int i=0;i<26;i++)
    {
        if(u->children[i]!=NULL)return false;
    }
        return true;

}
bool isJun(Node *u)
{
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(u->children[i]!=NULL)
            c++;
    }
    if(u->EoW>0 || c>1)    return true;
    return false;
}
void removeEdge(Node *u,char c,int d)
{
    if(d==0)
    {
        return;
    }
    int r=c-65;
    Node *v=u->children[r];
    u->children[r]=NULL;
    delete v;
}
int  del(Node *root, string s,int k=0)
{
    Node *u=root;
    if(u==NULL)
    {
        return 0;
    }
    if(k==s.length())
    {
        if(u->EoW==0) return 0;
        if(isLeaf(u)==false)
        {
            u->EoW=0;
            return 0;
        }
        return 1;
    }
    int r=s[k]-65;
    int d=del(u->children[r],s,k+1);
    int j=isJun(u);
    removeEdge(u,s[k],d);
    if(j==1)
    {
        d=0;
    }
    return d;
}
void printTRIE(Node *root, string s="") //lexicographical sort
{
    Node *u=root;
    if(u->EoW>0)
        cout<<s<<endl;
    for(int i=0;i<26;i++)
    {
        if(u->children[i]!=NULL)
        {
            char c=char(i+65);
            printTRIE(u->children[i],s+c);
        }
    }

}


int main()
{
    Node *root=new Node();

    while(1){
        cout<<"1. Insert    2. Search    3. Delete   4. Lexicographical Sorting  5. Display Strings  6. End"<<endl<<endl;
        int choice;
        string x;
        cin>>choice;
        if(choice==1){
            cout<<"Insert String: ";
            cin>>x;
            trie_insert(root,x);
            cout<<x<<" is inserted in the trie"<<endl;
        }
        else if(choice==2){
            cout<< "Enter string to search: ";
            cin>>x;
            if(trie_search(root,x)>0)  cout<<x<<" FOUND "<<endl;
            else    cout<<x<<" NOT FOUND "<<endl;
        }
        else if(choice==3){
            string s;
            cout << "string to delete:";
            cin >> s;
            del( root,s,0);
        }
        else if(choice==4){
             printTRIE(root);
        }
        else if(choice==5){
             printTRIE(root);
        }
        else if(choice==6){
            break;
        }
        else{
            cout<<"Invalid Choice"<<endl;
            break;
        }
        cout<<endl;
    }

}
/*inputs:

1 MIST
1 MIT
1 CSE
1 CSE
1 CE
1 MISTCSE
1 ME
1 EECE
1 ABC
1 ABC
1 AB

*/
