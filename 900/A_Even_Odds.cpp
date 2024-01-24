#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n,int k)
{
    int temp=(n+1)/2;
    if(k<=temp)
    {//odd
        cout<<(k*2-1);
        
    }else{
        //even
        int ind=k-temp;
        cout<<ind*2;
    }
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n,k;cin>>n>>k;
// int t;cin>>t;while(t--){}
solve(n,k);
return 0;
}