///quick sort
#include<bits/stdc++.h>
using namespace std;
int part(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low;
    for(int j=low;j<high;j++)
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
int partt(int arr[],int low,int high)
{
    int pivot=high;
    int i=low;
    for(int j=low;j<pivot;j++)
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

int quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int i=partt(arr,low,high);
        quickSort(arr,low,i-1);
        quickSort(arr,i+1,high);
    }
}
int main()
{
    int n=5;
    int arr[5]={4,2,3,5,1};
    quickSort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}
