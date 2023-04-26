#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*
There are n
 concert tickets available, each with a certain price. Then, m
 customers arrive, one after another.

Each customer announces the maximum price they are willing to pay for a ticket, and after this,
they will get a ticket with the nearest possible price such that it does not exceed the maximum price.

In this question, we are given there are m customers and n tickets.We need to distribute tickets among the customer such that
ticket costs less than maximum price customer can pay. We first the cost of all tickets we have.
Adding all the costs of tickets in the set automatically sort them. Then using upper bound function we find iterator of
the cost of ticket just greater than equal to the maximum price customer can pay. If we get iterator to the first position which mean that
all the ticket's cost is greater than what customer can pay maximum.Therefore, we cannot sell ticket to this customer so output -1 else 
output the ticket cost just less than the upper_bound ticket.
*/
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ll n,m;
    cin>>n>>m;
    multiset<ll>a;
    ll b[m];
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a.insert(x);
    }
    for(ll i=0;i<m;i++){cin>>b[i];}
    for(ll i = 0;i<m;i++)
    {
        auto it = a.upper_bound(b[i]);
        
        if(it == a.begin())
        {
            cout<<-1<<endl;
        }
        else
        {
            it--;
            cout<<*it<<endl;
            a.erase(it);
        }
    }
    
    
    return 0;
}
