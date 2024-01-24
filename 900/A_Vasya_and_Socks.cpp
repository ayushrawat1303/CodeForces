#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n,int m)
{
    int stock=n;int i=1;
    while(stock>0)
    {
        stock--;
        if(i%m==0)
        {
            stock++;
        }
        if(stock>0)
        {
            i++;
        }
    }
    
    cout<<i;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n,m;cin>>n>>m;
// int t;cin>>t;while(t--){}
solve(n,m);
return 0;
}