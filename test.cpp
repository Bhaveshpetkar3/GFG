#include <bits/stdc++.h>
using namespace std;
bool solve()
{
    string x,y;
    cin>>x>>y;
    int len=x.size();
    for(int i=0;i<len;i++)
    {
        if(x[i]=='*' || y[i]=='*')continue;
        if(x[i]!=y[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    if(solve())cout<<"Yes";
    else cout<<"No";
    }
    return 0;
}