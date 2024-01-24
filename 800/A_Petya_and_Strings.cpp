#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(string temp,string s)
{
    int flag=0;
    for(int i=0;i<temp.length();i++)
    {
        if(tolower(temp[i])>tolower(s[i]))
        {
            flag=1;
            cout<<flag;return;
        }
        else if(tolower(temp[i])<tolower(s[i]))
        {
            flag=-1;cout<<flag;return;
        }
    }
    cout<<0;

}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
string temp;
getline(cin,temp);
string s;
getline(cin,s);

// int t;cin>>t;while(t--){}
solve(temp,s);
return 0;
}