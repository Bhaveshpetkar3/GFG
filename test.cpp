#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> qwe;
    vector <int> :: iterator ptr;
    cout<<"Enter the size of the array:";
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        qwe.push_back(x);
    }
    cout<<"\nThe elements of the array are : ";
    for(ptr=qwe.begin();ptr<qwe.end();ptr++)
    {
        cout<<*ptr<<" ";
    }
    return 0;
}