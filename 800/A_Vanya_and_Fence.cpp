#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n,int h,vector<int>arr)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>h)
        {
            cnt+=2;
        }else{
            cnt+=1;
        }
    }
    cout<<cnt;

}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n,h;cin>>n>>h;
vector<int>arr;int ele;
for(int i=0;i<n;i++)
{
    cin>>ele;
    arr.push_back(ele);
}
// int t;cin>>t;while(t--){}
solve(n,h,arr);
return 0;
}