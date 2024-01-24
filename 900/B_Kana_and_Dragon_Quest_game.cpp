#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int h,int n,int m)
{
    while(n--)
    {
        if(h<=20)//as observed by the test case that after h=20 value of h starts increasing by this operation
        {
            break;
        }
        h=floor(h/2)+10;
    }
    if(h>m*10)
    {
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

int t;cin>>t;while(t--){
    int h,n,m;cin>>h>>n>>m;
    solve(h,n,m);
}

return 0;
}