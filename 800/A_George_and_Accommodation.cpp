#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
int cnt=0;
void solve(int a ,int b)
{
    if(abs(a-b)>=2)
    {
        cnt++;
    }
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;
while(n--)
{
    int a,b;cin>>a>>b;
    solve(a,b);
}
cout<<cnt;
// int t;cin>>t;while(t--){}

return 0;
}