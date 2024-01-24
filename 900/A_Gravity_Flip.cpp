#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n,vector<int>arr)
{
    sort(arr.begin(),arr.end());
    for(auto ele:arr)
    {
        cout<<ele<<" ";
    }
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;vector<int>arr;int ele;
for(int i=0;i<n;i++)
{
    cin>>ele;
    arr.push_back(ele);
}
// int t;cin>>t;while(t--){}
solve(n,arr);
return 0;
}