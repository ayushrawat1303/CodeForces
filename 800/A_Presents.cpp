#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n,vector<int>arr)
{
    int mini=INT_MAX;
    int temp=n;int prev;vector<int>ans;int ind;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,arr[i]);
        ind=i;
    }
    ind++;
    cout<<ind<<" ";
    prev=mini;
    mini=INT_MAX;
    temp--;
    while(temp--)
    {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>prev)
            {
                mini=min(mini,arr[i]);
                ind=i;
            }
        }
        ind++;
        // cout<<ind<<endl;
        ans.push_back(ind);
        prev=mini;
        mini=INT_MAX;
    }
    for(auto ele:ans)
    {
        cout<<ele<<" ";
    }
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>arr;int ele;
for(int i=0;i<n;i++)
{
    cin>>ele;
    arr.push_back(ele);
}
// int t;cin>>t;while(t--){}
solve(n,arr);
return 0;
}