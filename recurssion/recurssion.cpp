#include<bits/stdc++.h>
using namespace std;

void tailRecurssion(int num)
{
    if(num ==0)
        return;

    cout<<num<<endl;
    tailRecurssion(num-1);
}

void non_tailRecurssion(int num)
{
    if(num ==0)
        return;

    non_tailRecurssion(num-1);
    cout<<num<<endl;
}

int main()
{
    int num = 10;
    tailRecurssion(num);
    cout<<endl;
    non_tailRecurssion(num);
}