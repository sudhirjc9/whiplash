#include<bits/stdc++.h>
using namespace std;

int digitSum(int num)
{
    if(num==0)
        return 0;

    return num%10 + digitSum(num/10);
}

int main()
{
    int num;
    cin>>num;

    cout<<digitSum(num);
}