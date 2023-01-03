#include<bits/stdc++.h>
using namespace std;

int arr[100];


int fib_memo(int num)
{
    if(arr[num]==-1)
    {
        int res;
        if(num==0||num==1)
             res= num;
        else
            res = fib_memo(num-1)+fib_memo(num-2);

        arr[num] = res;
    }

    return arr[num];
}


int fib_tab(int num)
{
    int arr[num+1];
    arr[0]=0, arr[1]=1;

    for(int i=2; i<=num; i++)
        arr[i] = arr[i-1]+arr[i-2];

    return arr[num];
}


int main()
{

    fill(arr,arr+100,-1);
    int num;
    cin>>num;
    
    cout<<"memoization: "<<fib_memo(num)<<endl;

    cout<<"tabulation "<<fib_tab(num)<<endl;
}