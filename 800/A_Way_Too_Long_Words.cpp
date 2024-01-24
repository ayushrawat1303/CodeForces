#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(string temp)
{
    int n=temp.length();
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt++;
    }
    if(cnt>10)
    {
        cnt-=2;
        cout<<temp[0]<<cnt<<temp[n-1]<<endl;
    }
    else{
        cout<<temp<<endl;
    }
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

int t;cin>>t;
string temp;
getline(cin,temp);
while(t--){
    getline(cin,temp);
    solve(temp);
}

return 0;
}