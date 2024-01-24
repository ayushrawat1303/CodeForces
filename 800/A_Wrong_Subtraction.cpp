#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n,int k)
{
    while(k--)
    {
        if(n%10==0)
        {
            n/=10;
        }
        else{
            n--;
        }
    }
    cout<<n;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n,k;cin>>n>>k;
// int t;cin>>t;while(t--){}
solve(n,k);
return 0;
}