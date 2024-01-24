#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n)
{
    int ans;int a=((n+1)/2);
    if(n%2==0)
    {
        cout<<a;
    }else{
        cout<<-a;
    }
    
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;
// int t;cin>>t;while(t--){}
solve(n);
return 0;
}