#include<bits/stdc++.h>
using namespace std;

const int SIZE=256;

char leftMostRepeatingCar(string &str)
{
    int ch[SIZE] ={0};
    fill(ch,ch+SIZE, -1);

    int res = INT_MAX;

    for(int i=0; i<str.length(); i++)
    {
        if(ch[str[i]]==-1)
            ch[str[i]]=i;
        else
            res = min(res,ch[str[i]]);
    }

    return res!=INT_MAX?str[res]:-1;
}

int main(){
    string str = "geeksforgeeks";
    cout<<leftMostRepeatingCar(str);
}