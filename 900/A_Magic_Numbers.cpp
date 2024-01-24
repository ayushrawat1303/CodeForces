//मेरा नाम अयुश रावत है
#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
// #define int long long
#define mod 1000000007
void solve(string n)
{
    int flag=1;
    for(int i=0;i<n.size();i++)
    {
        if(n[i]!='1' && n[i]!='4')
        {
            flag=0;
            break;
        }
    }
    if(n[0]=='4')
    {
        flag=0;
    }
    if(n.find("444")!=n.npos)
    {
        flag=0;
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
string n;cin>>n;
// int t;cin>>t;while(t--){}
solve(n);
return 0;
}