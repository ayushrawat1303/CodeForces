#include<bits/stdc++.h>
using namespace std ;
#define endl '\n'
#define int long long
#define mod 1000000007
void solve(int n)
{
    if(n<2020)
    {
        cout<<"NO"<<endl;
    }
    else if(n%2020<=n/2020)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
// [Multiple of 2020]: If n is a multiple of 2020, 
// then it can definitely be represented using only multiples
//of 2020.In this case, n % 2020 will be 0,and the condition is satisfied.
// [If n is not a multiple of 2020], then we need to 
// check if the remainder (n % 2020) is small enough
//  to be compensated by some multiples of 2021.
//  The quotient (n / 2020) represents the maximum
//  number of times 2020 can be used, and if the 
// remainder is less than or equal to this maximum,
//  it means we can use the remaining part to 
// represent n using multiples of 2021. This
//  is the essence of the condition.
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