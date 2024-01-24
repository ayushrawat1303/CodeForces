#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int int64_t
#define mod 1000000007
void solve(int n)
{
    int flag=0;
    //odd
    if(n%2==1)
    {
        cout<<"YES"<<endl;
        return;
    }else{
        int div=n;
        while(div>2)
        {
            div/=2;
            //odd
            if(div%2==1)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

int t;cin>>t;
while(t--){
    int n;
    cin>>n;
    solve(n);
}

return 0;
}