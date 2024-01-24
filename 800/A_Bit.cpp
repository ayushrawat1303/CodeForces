#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;
string temp;
getline(cin,temp);
int a=0;
while(n--)
{
    getline(cin,temp);
    if(temp[0]=='X')
    {
        if(temp[1]=='+')
        {
            a++;
        }else{
            a--;
        }
    }
    else{
        if(temp[0]=='+')
        {
            ++a;
        }else{
            --a;
        }
    }
}
cout<<a;
// int t;cin>>t;while(t--){}
return 0;
}