#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n)
{
    while(true)
    {
        n++;
        int temp=n;
        int a=temp%10;temp/=10;int b=temp%10;temp/=10;int c=temp%10;temp/=10;int d=temp%10;temp/=10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            break;
        }
    }
    cout<<n;
    
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;
// int t;cin>>t;while(t--){}
solve(n);
return 0;
}