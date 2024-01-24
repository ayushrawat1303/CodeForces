#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int k,int n ,int w)
{
    int s=(2*k+(w-1)*k);
    if(s%2==0)
    {
        s/=2;
        s*=w;
    }
    else{
        s*=(w/2);
    }
    int res=s-n;
    if(res>0)
    {
        cout<<res;
    }
    else{
        cout<<0;
    }
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int k,n,w;
cin>>k>>n>>w;
// int t;cin>>t;while(t--){}
solve(k, n, w);
return 0;
}   