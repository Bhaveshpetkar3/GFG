#include <bits/stdc++.h>
using namespace std;
const long long int M = 998244353;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=1,prev=1,prev2=1;
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1]){
                ans=prev+prev2;
            }
            prev2=prev;
            prev=ans;
        }
        cout<<ans<<endl;
    }
    return 0;
}
