#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n)
{
    vector<int>arr;
    for(int i=2;i<=30;i++)
    {
        int ele=pow(2,i)-1;
        arr.push_back(ele);
    }
    int ans;
    for(int i=0;i<arr.size();i++)
    {
        if(n%arr[i]==0)
        {
            ans=n/arr[i];
            break;
        }
    }
    cout<<ans<<endl;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

int t;cin>>t;while(t--){
    int n;cin>>n;
    solve(n);
}

return 0;
}