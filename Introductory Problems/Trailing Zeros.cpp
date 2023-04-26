#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*
Your task is to calculate the number of trailing zeros in the factorial n!
.

For example, 20!=2432902008176640000
 and it has 4
 trailing zeros.

 In this question, we are needed to find out number of trailing zeros at the end of n!.
 Underlying concept in this  problem is ,
 That number of trailing zeros will be the highest power of 10 which divides n factorial which will be equal to minimum power of 5
 and 2 which divides n factorial because  2 and 5 prime factors combine to form 10.

 Observation : Highest power of 2 dividing n factorial will always be greater than Highest power of 5 dividing n factorial.
 Therefore, we need to find out highest power of 5 dividing n factorial.
 First we add n/5 in our answer this included all the numbers diivisible by 5. then we again addd n/25 to the ans this included  all the 
 numbers which are divisble by 25. We are not multiplying it by 2 because one of the five in 25 was already included in earlier step and so on.
 
*/
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ll n;
    cin>>n;
    ll ans = 0;
    while(n>=1)

    {
        ans = ans + n/5;
        n = n /5;
    }

    cout<<ans;
    
    return 0;
}
