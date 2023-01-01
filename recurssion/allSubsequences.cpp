#include<bits/stdc++.h>
using namespace std;

void subsequences(string str, int index, string out)
{

    subsequences(str.substr(1), index+1;)
}

int main()
{
    string str = "abcd";
    string out;
    subsequences(str,0, out);
}