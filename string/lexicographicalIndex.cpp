#include<bits/stdc++.h>
using namespace std;

#define SIZE 256

int factorial(int num)
{
    if(num<=1)
        return 1;

    return num*factorial(num-1);
}

int lexicograpical_pos(string &str)
{

    int res = 1;
    int n = str.length();
    int mul = factorial(n);
    int fact = factorial(n);
    int ch[SIZE]={0};
    for(int i=0; i<str.size(); i++)
        ch[str[i]]++;

    for(int i=1; i<SIZE; i++)
        ch[i]+=ch[i-1];

    for(int i=0; i<str.length()-1; i++)
    {
        mul=mul/(n-i);
        res = res+ ch[str[i]-1]*mul;

        for(int j=str[i]; j<SIZE; j++ ){
            ch[j]--;
        }
    }
    return res;
}

int main()
{
    string str = "STRING";
    cout<<"lexicograpical position is: "<<lexicograpical_pos(str)<<endl;
}