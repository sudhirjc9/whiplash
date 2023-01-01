#include<bits/stdc++.h>
using namespace std;


int maxCut(int size, int a, int b, int c)
{
    if(size==0)
        return 0;
    if(size < 0)
        return -1;

    int res = max(maxCut(size-a,a,b,c),max(maxCut(size-b,a,b,c),maxCut(size-c,a,b,c)));

    if(res==-1)
        return -1;

    return res+1;

}

int main()
{
    int r_size=5, a =2, b=1, c=5;

    cout<<maxCut(r_size, a, b, c);
}