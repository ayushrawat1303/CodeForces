#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(string temp)
{
    vector<char>arr;
    for(int i=0;i<temp.length();i++)
    {
        if(isdigit(temp[i]))
        {
            arr.push_back(temp[i]);
        }
    }
    if(arr.size()==1)
    {
        cout<<temp[0];
        return;
    }
    sort(arr.begin(),arr.end());
    vector<char>n;
    for(auto ele:arr)
    {
        n.push_back(ele);
        n.push_back('+');
    }
    n.pop_back();
    for(int i=0;i<n.size();i++)
    {
        cout<<n[i];
    }

}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
string temp;
getline(cin,temp);
// int t;cin>>t;while(t--){}
solve(temp);
return 0;
}