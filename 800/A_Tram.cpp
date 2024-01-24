#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
int maxi=INT_MIN;
int curr=0;
void solve(int a,int b)
{
    curr-=a;
    curr+=b;
    maxi=max(maxi,curr);
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;
int ele1,ele2;
while(n--)
{
    cin>>ele1;cin>>ele2;
    solve(ele1,ele2);
}
cout<<maxi;
// int t;cin>>t;while(t--){}

return 0;
}