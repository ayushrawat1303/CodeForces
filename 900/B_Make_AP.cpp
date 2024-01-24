#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int a,int b,int c)
{
    //if three terms(a,b,c) are in ap then => 2b=a+c
    int m=-1;
    if((a+c)%(2*b)==0)
    {
        m=(a+c)/(2*b);
    }
    else if((2*b-a)%c==0 && (2*b-a)>0)
    {
        m=(2*b-a)/c;
    }else if((2*b-c)%a==0 && (2*b-c)>0)
    {
        m=(2*b-c)/a;
    }
    if(m==-1)
    {
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

int t;cin>>t;while(t--){
    int a,b,c;cin>>a>>b>>c;
    solve(a,b,c);
}

return 0;
}