#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n,vector<int>arr)
{
    sort(arr.begin(),arr.end());
    int diff=INT_MAX;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if((j-i+1)==n)
            {
                diff=min(diff,arr[j]-arr[i]);
            }
        }
    }
    cout<<diff;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n,m;
cin>>n>>m;
vector<int>arr;
int ele;
for(int i=0;i<m;i++)
{
    cin>>ele;
    arr.push_back(ele);
}
// int t;cin>>t;while(t--){}
solve(n,arr);
return 0;
}