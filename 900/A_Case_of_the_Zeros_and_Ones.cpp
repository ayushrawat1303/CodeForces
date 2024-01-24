#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n,string str)
{
    int i=0;int cnt0=0,cnt1=0;
    // cout<<n<<endl;
    while (i<n)
    {
        if(str[i]=='0')
        {
            cnt0++;
        }else{
            cnt1++;
        }
        i++;
    }
    if(cnt1==cnt0)
    {
        cout<<0;
    }else if(cnt1>cnt0)
    {
        cout<<cnt1-cnt0;
    }else{
        cout<<cnt0-cnt1;
    }
    // cout<<n;
    
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;
string temp;getline(cin,temp);
string str;getline(cin,str);
// int t;cin>>t;while(t--){}
solve(n,str);
return 0;
}