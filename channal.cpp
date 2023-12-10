#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,q;
        cin>>n>>a>>q;
        string s;
        cin>>s;
        int f1=0,f2=0,f3=0,f4=0,pluss=0,minuss=0;
        if(n==a)
        {
            f1=1;
        }
        else
        {
           for(int i=0;s[i]!='\0';i++)
           {
               if(s[i]=='+') pluss++;
               else if(s[i]=='-') minuss++;
           }
           int x=a+pluss;
           if(x<n)
           {
               f2=1;
           }
           else if(n<=x)
           {
               int y=x-minuss;
               if(n<=y)
               {
                   f1=1;
               }
               else if(n>y)
               {
                   f3=1;
               }
           }
        }
        if(f1==1)
        {
            cout<<"YES"<<endl;
        }
        if(f2==1)
        {
            cout<<"NO"<<endl;
        }
        if(f3==1)
        {
            cout<<"MAYBE"<<endl;
        }
    }
}
