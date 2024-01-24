#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
// #define int long long
#define mod 1000000007
void solve(int n,int a,int b)
{
    map<int,char>mp;
    char c='a';
    for(int i=1;i<=26;i++)
    {
        mp[i]=c++;
    }
    vector<char>ans;
    int i=1;int k=1;
    while(n--)
    {
        ans.push_back(mp[k]);
        if(k<b)
        {
            k++;
        }else{
            k=1;
        }
    }
    for(auto ele:ans)
    {
        cout<<ele;
    }cout<<endl;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
// solve();
int t;cin>>t;while(t--){
    int n,a,b;cin>>n>>a>>b;
    solve(n,a,b);
}

return 0;
}