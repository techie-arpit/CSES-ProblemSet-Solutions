#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*

Your task is to calculate the number of bit strings of length n
.

For example, if n=3
, the correct answer is 8
, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.
In this question, we have to calculate the number of bitstrings of length n.
As we have n bits we have two choices for each bit. Either it can be 1 or 0. Therefore, ans is 2^n but here n 
can go very large as 10^6 and 2^(10^6) is a vvery large number which can cause overflow.
So, we need to give ans mod 10^9 + 7.Underlying, trick in this problem is taking mod in each step will not affect the answer.
Therefore keep multiplying 2 to ans variable n times and take mod n times.

Possible mistakes:
1) Directly using pow function. Remember pow function returns float value which can give wrong answers when working with very 
large number.
2) Not taking mod which will cause overflow.
*/
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ll n;
    cin>>n;
    ll mod = 1e+09 + 7;

    ll ans = 1;
    for(ll i =1;i<=n;i++)
    {
        ans= (ans*2)%mod;
    }

    cout<<ans;
    
    return 0;
}
