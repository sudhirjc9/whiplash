#include<bits/stdc++.h>
using namespace std;

void subStrings(string str, string output, int index)
{
    if(index == str.length())
        {
            cout<<output<<endl;
            return;
        }

    for(int i=index; i<str.length(); i++)
        {
            subStrings(str,output+str[index],index+1);
            subStrings(str, output,index+1);
        }
}

int main()
{
    string str = "geeksforgeeks", output = "";
    subStrings(str,output,0);
}
