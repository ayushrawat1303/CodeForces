#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(string ip)
{
    string temp;
    temp.push_back(toupper(ip[0]));
    for(int i=1;i<ip.length();i++)
    {
        temp.push_back(ip[i]);
    }
    for(auto ele:temp)
    {
        cout<<ele;
    }
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
string ip;
getline(cin,ip);
// int t;cin>>t;while(t--){}
solve(ip);
return 0;
}