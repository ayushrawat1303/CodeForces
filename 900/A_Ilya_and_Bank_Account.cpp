#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n)
{
    if(n<0)
    {
        int temp=(n%10);
        n/=10;
        if(abs(n%10)>abs(temp))
        {
            n/=10;
            if(temp==0 && n==0)
            {
                cout<<0;
            }else if(temp!=0 && n==0)
            {
                cout<<temp;
            }else{
                cout<<n<<abs(temp);
            }
        }else{
            cout<<n;
        }
    }else{
        cout<<n;
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