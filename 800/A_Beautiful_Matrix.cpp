#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int row,col;int ele;
for(int i=1;i<=5;i++)
{
    for(int j=1;j<=5;j++)
    {
        cin>>ele;
        if(ele==1)
        {
            row=i,col=j;
            break;
        }
    }
}
int cnt=0;
cnt+=abs(3-row)+abs(3-col);
cout<<cnt;
// int t;cin>>t;while(t--){}

return 0;
}