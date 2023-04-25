#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*
In this question we are given value of n which we need to make with the help  of  dice.
We will use dynamic programming approach in this question.
Whichever number we want to make at the last throw we would have got one of this 1,2,3,4,5,6 possibilities. Therefore, total
number of ways are just the sum of total number of ways to get n-1,n-2,n3,n-4,n-5,n-6

In my implementation, I  have used nested for loop to calculate ans[i] with the condition that j is less than equal to i 
and it do not run more than 6 times. First condition takes care of the cases in which we have numbers less than 6
and we might end up having i-j negative and second condition takes care that there is  only possibility that at max 6 types of outcomes are
possible in last throw.

Remember! we are required to output the answer mod  10^9 + 7 .
*/
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    ll ans[n+1];
    ans[0] = 1;
    ans[1] = 1;

    ll mod = 1e+09 + 7;
    for(ll i = 2;i<=n;i++)
    {
        ans[i]=0;
        for(ll j=1; j<=i && j<=6 ; j++)
        {
            ans[i] = (ans[i] + ans[i-j])%mod;
        }
    }

    cout<<ans[n];
    
    return 0;
}
