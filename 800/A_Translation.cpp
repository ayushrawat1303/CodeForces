#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(string temp1,string temp2)
{
    int j=0;int flag=1;
    for(int i=temp1.size()-1;i>=0;i--)
    {
        if(temp1[i]==temp2[j])
        {
            j++;
            continue;
        }else{
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO";
    }else{
        cout<<"YES";
    }

}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
string temp1,temp2;getline(cin,temp1);getline(cin,temp2);
// int t;cin>>t;while(t--){}
solve(temp1,temp2);
return 0;
}