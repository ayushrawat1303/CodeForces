#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(vector<int>arr,int k)
{
    int flag=0,cnt=0;
    if(k==0)
    {
        cout<<"0"<<endl;
        return ;
    }else{
        sort(arr.begin(),arr.end(),greater<int>());
        int sum=0;
        for(int i=0;i<12;i++)
        {
            sum+=arr[i];
            cnt++;
            if(sum>=k)
            {   
                flag=1;
                break;
            }
        }
    }   
    if(flag==0)
    {
        cout<<"-1"<<endl;
    }else{
        cout<<cnt<<endl;
    }
    
    

}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int k;cin>>k;int ele;vector<int>arr;
for(int i=0;i<12;i++)
{
    cin>>ele;
    arr.push_back(ele);
}
solve(arr,k);
// int t;cin>>t;while(t--){}

return 0;
}