#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*
You are given all numbers between 1,2,…,n
 except one. Your task is to find the missing number.

In this question, we are given n-1 numbers from 1 to n and we need to find which number is missing in between.
So, we can first input all the numbers and sort them and then run a loop and as soon as we find some number is missing
we can break the loop and give that i as output.
*/
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    ll i;
    for( i=1;i<=n;i++)
    {
        if(a[i-1]!=i)
        {
            break;
        }
    }
    cout<<i;
    
    return 0;
}
