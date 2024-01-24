#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(string temp)
{
    set<char>s;
    for(auto ele:temp)
    {
        s.insert(ele);
    }
    if(s.size()%2==0)
    {
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
string temp;
getline(cin,temp);
// int t;cin>>t;while(t--){}
solve(temp);
return 0;
}