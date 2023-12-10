#include<bits/stdc++.h>
using namespace std;
bool pali(int x)
{
    if(x<0) return false;
    else if(x==0) return true;
    else
    {
        string s=to_string(x);
        int a=s.size();
        int d=a-1,f=0;

        for(int i=0;i<a/2;i++)
        {
            if(s[i]==s[d])
            {
                cout<<s[i]<<" "<<s[d]<<endl;

            }
            else f=1;
            d--;

        }
        if(f==0)
        return true;
        else return false;
    }
}
int main()
{
    int c;
    cin>>c;


    int x=pali(c);
    cout<<x;


}
