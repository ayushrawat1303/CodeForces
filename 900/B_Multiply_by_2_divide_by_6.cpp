#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n)
{
    //to make n==1 , it only possible when we divide n/6
    //that means n/6=1, that means n=6;so if we can make n=6 then n=1 is possible otherwise not
    //now=> 6=2^1 * 3^1(6 can only be made when 2 & 3 comes equal number of times )
    //so we calculate what is the number of times it is divided by 2 and the number of times it is divided by 3
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    int cnt2=0,cnt3=0;
    while(n%2==0)
    {
        n/=2;cnt2++;
    }
    while(n%3==0)
    {
        n/=3;cnt3++;
    }
    if(n==1 && cnt2<=cnt3)
    {
        cout<<(2*cnt3-cnt2)<<endl;
    }else{
        cout<<-1<<endl;
    }
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int t;cin>>t;while(t--){
    int n;cin>>n;
    solve(n);
}

return 0;
}