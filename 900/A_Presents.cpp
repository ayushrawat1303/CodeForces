#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(vector<int>arr)
{
    vector<int>temp(arr.size(),0);
    for(int i=0;i<arr.size();i++)
    {
        int ele=arr[i];
        ele--;
        int ind=i;
        ind++;
        temp[ele]=ind;
    }
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
    
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>arr;
int ele;
for(int i=0;i<n;i++)
{
    cin>>ele;
    arr.push_back(ele);
}
// int t;cin>>t;while(t--){}
solve(arr);
return 0;
}