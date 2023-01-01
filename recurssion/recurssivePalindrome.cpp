#include<bits/stdc++.h>
using namespace std;

bool palindromeRecurrsive(string str, int num)
{
    if(num == 1 || num==0)
        return true;
    if(str[0]==str[1])
        return true;

    return str[0]==str[num-1] && palindromeRecurrsive(str.substr(1),num-1);
}

int main()
{
    string str;
    cout<<endl;
    cin>>str;
    cout<<endl;
    cout<<palindromeRecurrsive(str,str.length());
}