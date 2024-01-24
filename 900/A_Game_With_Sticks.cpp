#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n,int m)
{
    int cnt=0;
    while(n>=1 && m>=1)
    {
        n--,m--;
        cnt++;
    }
    if(cnt==0 || cnt%2==0)
    {
        cout<<"Malvika";
    }else{
        cout<<"Akshat";
    }
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n,m;cin>>n>>m;
// int t;cin>>t;while(t--){}
solve(n,m);
return 0;
}