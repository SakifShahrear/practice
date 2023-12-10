#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=0;
        char a[10+1][10+1];
        for(int i=1;i<=10;i++)
        {
            for(int j=1;j<=10;j++)
            {
                cin>>a[i][j];
            }
        }
         for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=5;j++)
            {
                if(a[i][j]=='X')
                {
                    if(j==i)
                    {

                        p=p+j;
                    }
                    else if(j>i)
                    {
                        p=p+i;
                    }
                    else if(j<i)
                    {
                        p=p+j;
                    }
                }
            }
        }
        int k=1;

        for(int i=1;i<=5;i++)
        {
            for(int j=6;j<=10;j++)
            {
                int x=j-k;
                if(a[i][j]=='X')
                {
                    if(x==i)
                    {
                        p=p+x;
                    }
                    else if(x>i)
                    {
                        p=p+i;
                    }
                    else if(x<i)
                    {
                        p=p+x;
                    }

                }
                k=k+2;;
            }

        }
        int y=5;
        for(int i=6;i<=10;i++)
        {
            int x=i-y;
            for(int j=1;j<=5;j++)
            {
                if(a[i][j]=='X')
                {
                    if(j==x)
                    {
                        p=p+j;
                    }
                    else if(j>x)
                    {
                        p=p+x;
                    }
                    else if(j<x)
                    {
                        p=p+j;
                    }

                }
            }

        }
        int kk=1;

        for(int i=6;i<=10;i++)
        {
            int z=i-y;
            for(int j=6;j<=10;j++)
            {
                int x=j-k;
                if(a[i][j]=='X')
                {
                    if(x==z)
                    {
                        p=p+x;
                    }
                    else if(x>z)
                    {
                        p=p+z;
                    }
                    else if(x<z)
                    {
                        p=p+x;
                    }


                }
                k+=2;
            }

        }

        cout<<p<<endl;




}
}
