#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(map<int,int>mp,vector<int>arr)
{
    int cnt=0;
    for(int i=0;i<arr.size();i++)
    {
        if(mp.count(arr[i])==1)
        {
            cnt+=mp[arr[i]];
        }
    }
    cout<<cnt;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

int t;cin>>t;
map<int,int>mp;vector<int>arr;
while(t--){
    int a,b;cin>>a>>b;
    mp[a]++;arr.push_back(b);
}
solve(mp,arr);

return 0;
}