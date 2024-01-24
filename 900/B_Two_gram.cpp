#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
// #define int long long
#define mod 1000000007
bool cmp(pair<string,int>&p1,pair<string,int>&p2)
{
    return p1.second>p2.second;
}
void solve(int n,string str)
{
    if(str.size()==2)
    {
        cout<<str<<endl;
        return;
    }
    map<string,int>mp;
    for(int i=1;i<n;i++)
    {
        string temp;
        temp.push_back(str[i-1]);
        temp.push_back(str[i]);
        // sort(temp.begin(),temp.end());
        mp[temp]++;
    }
    vector<pair<string,int>>v;
    for(auto &it:mp)
    {
        v.push_back(it);
    }
    sort(v.begin(),v.end(),cmp);
    cout<<v[0].first<<endl;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;
string str;cin>>str;
// int t;cin>>t;while(t--){}
solve(n,str);
return 0;
}