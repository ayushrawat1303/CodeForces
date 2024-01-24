#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007

// void solve(string num)
// {

// }
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;
int temp=n;
if(n==1)
{
    cout<<1;
    return 0;
}
int cnt=0;char prev;
while(n--)
{
    vector<char>n;char ele;
    for(int i=0;i<=1;i++)
    {
        cin>>ele;
        n.push_back(ele);
    }
    if((prev=='1' && n[0]=='0')|| (prev=='0' && n[0]=='1'))
    {
        temp--;
    }
    prev=n[1];
}
cout<<temp;

// int t;cin>>t;while(t--){}

// return 0;
}