#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(string n)
{
    int flag=0;
    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='H' || n[i]=='Q' || n[i]=='9')
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO";
    }else{
        cout<<"YES";
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