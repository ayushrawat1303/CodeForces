#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(vector<int>arr,int k)
{
    int cnt=0;
    if(arr[0]==0)
    {
        cout<<"0";
        return;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>=arr[k-1])
        {
            if(arr[i]==0)
            {
                continue;
            }
            else{
                cnt++;
            }
        }
    }
    cout<<cnt;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

int n,k;vector<int>arr;
cin>>n>>k;
int ele;
for(int i=0;i<n;i++)
{
    cin>>ele;
    arr.push_back(ele);
}
solve(arr,k);
return 0;
}