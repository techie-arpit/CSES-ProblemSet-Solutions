#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*
A permutation of integers 1,2,…,n
 is called beautiful if there are no adjacent elements whose difference is 1
.

Given n
, construct a beautiful permutation if such a permutation exists.

In this question, we need to give the permutation of n numbers such that difference between any two adjacent numbers is not 1.

First seeing the base cases

n=1 
Simply 1

n=2
Two possible cases 1,2 and 2,1 both have adjacent difference 1

Similarly for n=3 we have 6 combinations and each of them have atleast one adjacent difference 1.

n=4
We can have 3,1,4,2

Now, for each odd n we can just put in before 3 so that newly generted adjacent difference will be 2 and for each odd n we can put it 
behind 2 so that each newly generated adjacent difference is 2.
Hence for n>=4 it will such a permutation will always exist.
*/
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<n;
    }
    else if(n==2 || n==3)
    {
        cout<<"NO SOLUTION";
    }

    else
    {
        if(n%2==1)
        {
            for(ll i=n;i>=1;i=i-2)
            {cout<<i<<" ";}
            cout<<4<<" "<<2<<" ";
            for(ll i =6 ;i<n;i=i+2)
            {
                cout<<i<<" ";
            }
        }
        else
        {
            for(ll i= n-1 ;i>=1;i=i-2)
            {cout<<i<<" ";}
            cout<<4<<" "<<2<<" ";
            for(ll i = 6;i<=n;i=i+2)
            {
                cout<<i<<" ";
            }
        }
    }
    
    return 0;
}
