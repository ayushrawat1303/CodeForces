#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(char ele,string s)
{
    vector<char>v;
    v={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    if(ele=='R')
    {
        for(int i=0;i<s.size();i++)
        {
            auto ind=find(v.begin(),v.end(),s[i])-v.begin();
            ind--;
            cout<<v[ind];
        }
    }else{
        for(int j=0;j<s.size();j++)
        {
            auto ind=find(v.begin(),v.end(),s[j])-v.begin();
            ind++;
            cout<<v[ind];
        }
    }
    
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
char ele;cin>>ele;
string temp;getline(cin,temp);
string s;getline(cin,s);
// int t;cin>>t;while(t--){}
solve(ele,s);
return 0;
}