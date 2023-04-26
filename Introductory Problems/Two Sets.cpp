#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*
In this question, we need to divide numbers from 1 to n into two sets such that there sums are equal.
We know sum of first n natural numbers is (n*(n+1))/2 whiich implies each group must have sum equal to
(n*(n+1))/4 and we know sum is always going to be natural number.
Therefore, one of n or n+1 needs to be divisible by 4  (as one of them will always be odd and one always even)

Therefore, if n%4 is 1 or 2 it is not possible to divide numbers in two sets such that there sums are equal

Now, when n is divisible by 4, numbers are in ap and we know that sum of ith term from start and ith term from end is always 
constant in ap.
and we have n/2 pairs in ap.
So in one set put n,4 such pairs and n/4 in other set.
Hence if n=12
We can have sets as
1,2,3,10,11,12
and
4,5,6,7,8,9
here 1+12=2+11=3+10=4+9=5+8=6+7

When n%4 is 3
We can take (n-3)/4 terms from start and (n-3)/4  + 1 terms from the end 
sum of pairs of (n-3)/4 will be (n-3)/4 * (n+1) and 1 extra term will be n-((n-3)/4)

Therefore sum will be (3n + 3 + n^2 -2n -3)/4 = (n^2+n)/4 which is required sum of each set.

*/
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ll n;
    cin>>n;
    if(n%4==1 || n%4==2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        if(n%4==0)
        {
            cout<<n/2<<endl;
            for(ll i=1;i<=n/4;i++)
            {cout<<i<<" ";}
            for(ll i = n-n/4 +1; i<=n ; i++)
            {cout<<i<<" ";}
            cout<<endl;

            cout<<n/2<<endl;
            for(ll i = n/4+1;i<=n-(n/4);i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }

        else
        {
            cout<<n/2<<endl;
            for(ll i=1;i<=n/4;i++)
            {cout<<i<<" ";}
            for(ll i = n-(n/4) ; i<=n;i++)
            {cout<<i<<" ";}
            cout<<endl;

            cout<<n/2+1<<endl;

            for(ll i = n/4+1 ; i<=n-(n/4) - 1 ; i++)
            {cout<<i<<" ";}
            cout<<endl;
        }
    }
    
    return 0;
}
