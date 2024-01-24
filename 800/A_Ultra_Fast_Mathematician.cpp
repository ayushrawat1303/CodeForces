#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(string n1,string n2)
{
    for(int i=0;i<n1.length();i++){
        cout<<(n1[i]^n2[i]);
    }
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
string n1;getline(cin,n1);
// string temp;getline(cin,temp);
string n2;getline(cin,n2);

// int t;cin>>t;while(t--){}
solve(n1,n2);
return 0;
}