#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(string temp)
{
    int cntu=0,cntl=0;
    for(int i=0;i<temp.size();i++)
    {
        if(isupper(temp[i]))
        {
            cntu++;
        }else{
            cntl++;
        }
    }
    int flag=0;
    if(cntu>cntl)
    {
        flag=1;
    }
    for(int i=0;i<temp.size();i++)
    {
        if(flag==1)
        {
            temp[i]=toupper(temp[i]);
        }
        else{
            temp[i]=tolower(temp[i]);
        }
    }
    cout<<temp;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
string temp;getline(cin,temp);
// int t;cin>>t;while(t--){}
solve(temp);
return 0;
}