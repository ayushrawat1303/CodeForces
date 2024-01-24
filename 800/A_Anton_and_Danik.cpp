#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n,string temp)
{
    int cnt=0;
    for(int i=0;i<temp.size();i++)
    {
        if(temp[i]=='D')
        {
            cnt++;
        }
    }
    if((n-cnt)>cnt)
    {
        cout<<"Anton";
    }else if((n-cnt)==cnt)
    {
        cout<<"Friendship";
    }
    else{
        cout<<"Danik";
    }

}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;
cin>>n;
string temp;char ele;
for(int i=0;i<n;i++)
{
    cin>>ele;
    temp.push_back(ele);
}
// int t;cin>>t;while(t--){}
solve(n,temp);
return 0;
}