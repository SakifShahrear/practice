///mark sort
#include<bits/stdc++.h>
using namespace std;
void mergefuntion(int arr[],int low,int mid,int high)
{
    int i=low;
    int j=mid+1;
    int k=low;
    int b_array[high+5];
    while(i<=mid&&j<=high)
    {
        if(arr[i]<=arr[j])
        {
            b_array[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            b_array[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        b_array[k]=arr[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        b_array[k]=arr[j];
        k++;
        j++;
    }
    for(int ii=low;ii<=high;ii++)
    {
        arr[ii]=b_array[ii];
    }
}
void mergeSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        mergefuntion(arr,low,mid,high);
    }
}

int main()
{
    int n=5;
    int arr[5]={4,2,3,5,1};
    mergeSort(arr,0,5-1);
    for(int ii=0;ii<5;ii++)
    {
        cout<<arr[ii]<<" ";
    }

}
