#include <bits/stdc++.h>
using namespace std;
#define ll long long 
/*
You are given a list of n integers, and your task is to calculate the number of distinct values in the list.

In this question, we can just insert all the values in a set and we know that the set contain only distinct elements,
 so directly size of the set will be the final answer.

 */
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;

    set<ll> a;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a.insert(x);
    }

    cout<<a.size();
    
    return 0;
}
