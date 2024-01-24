#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n1,int n2)
{
    int cnt=0;
    while(n1<=n2)
    {
        n1*=3;n2*=2;
        cnt++;
    }
    cout<<cnt;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n1,n2;
cin>>n1>>n2;
// int t;cin>>t;while(t--){}
solve(n1,n2);
return 0;
}