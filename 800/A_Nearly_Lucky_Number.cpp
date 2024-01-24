#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n)
{
    int cnt=0;
    while(n)
    {
        if(n%10==4 || n%10==7) 
        {
            cnt++;
        }
        n/=10;
    }
    if(cnt==4 || cnt==7)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
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