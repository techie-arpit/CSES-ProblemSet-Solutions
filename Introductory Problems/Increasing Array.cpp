#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*
You are given an array of n
 integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?

In this question, we are given an array and we want to make it increasing. We are allowed to increase any element by 1 in 1 move.
So best way is to see if some element is smaller than it's previous elemeent then just make that element equal to the previous element.
and we should perform this in O(1)[not by running some kind of loop increasing each of a[i] till they do not become >= prev element]
 else it might give time limit exceed.
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
    ll ans = 0;
    for(ll i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            ans+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }

    cout<<ans;
    
    return 0;
}
