
#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(vector<int>arr)
{
    set<int>s;
    for(int i=0;i<arr.size();i++)
    {
        s.insert(arr[i]);
    }
    cout<<(4-s.size());
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
vector<int>arr;int ele;
for(int i=0;i<4;i++)
{
    cin>>ele;
    arr.push_back(ele);
}
// int t;cin>>t;while(t--){}
solve(arr);
return 0;
}