#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(vector<int>arr)
{
    int flag=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }

}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>arr;int ele;
for(int i=0;i<n;i++)
{
    cin>>ele;
    arr.push_back(ele);
}
// int t;cin>>t;while(t--){}
solve(arr);
return 0;
}