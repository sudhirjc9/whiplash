#include<bits/stdc++.h>
using namespace std;

int josephsProb(int n, int k)
{
    if(n==1)
        return 0;

    return ((josephsProb(n-1,k)+k)%n);
}

int main()
{
    int n =14, k=2;
    cout<<1+josephsProb(n ,k);
}