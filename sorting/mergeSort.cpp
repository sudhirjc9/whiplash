#include<bits/stdc++.h>

using namespace std;

int mergeArray(int arr[], int low, int mid, int high, int &res)
{
    int size1=mid-low+1, size2 = high-mid;
    int arr1[size1], arr2[size2];

    for(int i=0; i<size1; i++)
        arr1[i]=arr[low+i];
    for(int j=0; j<size2; j++)
        arr2[j] = arr[mid+j+1];


    int i=0,j=0,k=low;
    // for(int i=0; i<size1; i++)
    //     cout<<arr1[i]<<" ";

    // cout<<endl;
    
    // for(int i=0; i<size2; i++)
    //     cout<<arr2[i]<<" ";

    // cout<<endl;

    while(i<size1 && j<size2)
    {
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i];
            i++; k++;
        }
        else
        {
            arr[k]=arr2[j];
            k++;j++;
            res+=(size1-i);
        }
    }

    while(i<size1)
        {
            arr[k]=arr1[i];
            k++;i++;
        }
    while(j<size2)
        {
            arr[k]=arr2[j];
            k++;j++;
        }
    // for(int i=0; i<high; i++)
    //     cout<<arr[i]<<" ";
    // cout<<endl;
    return res;
}

void mergeSort(int arr[], int low, int high)
{
        
        if(low<high){
            int mid = low+(high-low)/2;
            mergeSort(arr, low, mid);
            mergeSort(arr, mid+1, high);
           // mergeArray(arr,low, mid, high);
        }
}

int inversion(int arr[], int low, int high, int &res)
{
        if(low<high){
        int mid = low+(high-low)/2;
       res+= inversion(arr, low, mid, res);
        res+=inversion(arr, mid+1, high, res);
       res+= mergeArray(arr,low, mid, high, res);
    }

    return res;
}

int main()
{
    int arr[]={10, 8, 12, 2, 1, 18};
    // for(auto &x:arr)
    //     cout<<x<<" ";
    // cout<<endl;
   // mergeSort(arr,0,5);
    // for(int i=0; i<6; i++)
    //     cout<<arr[i]<<" ";
    int res=0;
    cout<<inversion(arr,0,5,res);
}