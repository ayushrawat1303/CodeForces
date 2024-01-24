#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(string n)
{
    int cnt=1;int flag=0;
    for(int i=1;i<n.length();i++)
    {
        if(n[i]=='1' && n[i-1]=='1')
        {
            cnt++;
        }
        else if(n[i]=='0' && n[i-1]=='0')
        {
            cnt++;
        }
        else{
            cnt=1;
        }
        if(cnt>=7)
        {
            flag=1;break;
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
string n;getline(cin,n);

// int t;cin>>t;while(t--){}
solve(n);
return 0;
}