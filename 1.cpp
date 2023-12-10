
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
    if(u->EoW>0 or c>1)    return true;
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
int  del(Node *root, string s,int k)
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
        int choice;
        string x;
        cin>>choice;
        if(choice==1){
            cin>>x;
            trie_insert(root,x);
        }
        else if(choice==2){
            cin>>x;
            if(trie_search(root,x)>0)  cout<<x<<" FOUND "<<endl;
            else    cout<<x<<" NOT FOUND "<<endl;
        }
        else if(choice==3){
            string s;
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

