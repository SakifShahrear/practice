

#include<bits/stdc++.h>
using namespace std;
int part_low_pivot(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low;
    for(int j=low; j<high; j++)
    {
        if(arr[j]<=arr[high])
        {
            swap(arr[i],arr[j]);
            i++;
        }

    }
    swap(arr[i],arr[high]);
    return i;
}
int part_high_pivot(int arr[],int low,int high)
{
    int pivot=high;
    int i=low;
    for(int j=low; j<pivot; j++)
    {
        if(arr[j]<=arr[pivot])
        {
            swap(arr[i],arr[j]);
            i++;
        }

    }
    swap(arr[i],arr[pivot]);


    return i;
}

int quickSort(int arr[],int low,int high,int k)
{
    if(low<high)
    {
        int i=part_high_pivot(arr,low,high);
//        cout<<"ss "<<i<<endl;
//        cout<<k<<endl;
        if(i==k) return arr[i];
        else if(i<k)
        return quickSort(arr,i+1,high,k);
        else if(i>k)
            return quickSort(arr,low,i-1,k);
    }
    else
    {
        return arr[low];
    }
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    //int j=quickSort(arr,0,n-1,k-1);
    int kk=n-k;
    int j=quickSort(arr,0,n-1,kk);

//    for(int i=0; i<6; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
    cout<<j<<endl;
}

