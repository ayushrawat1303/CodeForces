#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(string n)
{
    vector<char>s;
    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='W' && n[i+1]=='U' && n[i+2]=='B')
        {
            i+=2;
            if(!s.empty() && s[s.size()-1]!='/')
            {
                s.push_back('/');
            }
        }
        else{
            s.push_back(n[i]);
        }
    }
    for(auto ele:s)
    {
        if(ele=='/')
        {
            cout<<" ";
        }else{
            cout<<ele;
        }
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