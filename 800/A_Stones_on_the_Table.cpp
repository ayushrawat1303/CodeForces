#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(string temp)
{
    int cnt=0;
    for(int i=1;i<temp.size();i++)
    {
        if(temp[i]==temp[i-1])
        {
            cnt++;
        }else{
            continue;
        }
    }
    cout<<cnt;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;char ele;string temp;
for(int i=0;i<n;i++)
{
    cin>>ele;
    temp.push_back(ele);
}
// int t;cin>>t;while(t--){}
solve(temp);
return 0;
}