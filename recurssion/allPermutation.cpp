#include<bits/stdc++.h>
using namespace  std;

void allPermuation(string str, int index)
{
    if(index ==str.length())
        {
            cout<<str<<endl;
            return;
        }

    for(int i=index; i<str.length(); i++)
    {
        swap(str[i], str[index]);
        allPermuation(str, index+1);
        swap(str[i], str[index]);
    }
    
}


int main()
{
    string str = "ABCD";
    allPermuation(str, 0);
}
