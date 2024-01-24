#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n)
{
    int stp=0;
    if(n<=5)
    {
        cout<<1;
        return ;
    }
    else{
        stp+=n/5;
        if(n%5!=0)
        {
            stp++;
        }
    }
    cout<<stp;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;
// int t;cin>>t;while(t--){}
solve(n);
return 0;
}