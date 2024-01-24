#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n,int t,string temp)
{
    while(t--)
    {
        for(int i=0;i<=n-2;i++)
        {
            if(temp[i]=='B' && temp[i+1]=='G')
            {
                swap(temp[i],temp[i+1]);
                i++;
            }
        }
    }
    cout<<temp;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n,t;cin>>n>>t;
string temp;char ele;
for(int i=0;i<n;i++)
{
    cin>>ele;
    temp.push_back(ele);
}
// int t;cin>>t;while(t--){}
solve(n,t,temp);
return 0;
}