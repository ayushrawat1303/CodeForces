#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int t;cin>>t;int cnt=0;
while(t--)
{
    vector<int>arr;int ele;int sum=0;
    for(int i=0;i<3;i++)
    {
        cin>>ele;
        sum+=ele;
    }
    if(sum>=2)
    {
        cnt++;
    }
}
cout<<cnt;

return 0;
}