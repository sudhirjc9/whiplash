#include<bits/stdc++.h>
using namespace std;


void subSequence(string input, string output)
{
    if(input.empty())
        {
            cout<<output<<endl;
            return;
        }

    subSequence(input.substr(1),output+input[0]);
    subSequence(input.substr(1),output);
        
}

int main()
{
    string str ="abcd" , out = "";
    subSequence(str,out);

}