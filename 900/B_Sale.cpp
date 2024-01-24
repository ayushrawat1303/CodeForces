#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int m,vector<int>arr)
{
    sort(arr.begin(),arr.end());
    int sum=0;
    int cnt=0;
    for(int i=0;i<arr.size();i++)
    {
        if(cnt<m && arr[i]<0)
        {
            sum+=arr[i];
            cnt++;
        }else{
            break;
        }
    }
    cout<<abs(sum);
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n,m;cin>>n>>m;
int ele;
vector<int>arr;
for(int i=0;i<n;i++)
{
    cin>>ele;
    arr.push_back(ele);
}
// int t;cin>>t;while(t--){}
solve(m,arr);
return 0;
}