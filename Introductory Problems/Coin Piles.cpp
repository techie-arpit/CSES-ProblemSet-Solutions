#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*
You have two coin piles containing a
 and b
 coins. On each move, you can either remove one coin from the left pile and two coins from the right pile, or two coins from the left pile and one coin from the right pile.

Your task is to efficiently find out if you can empty both the piles.

In this question, we are given that there are 2 piles having a and b coins  respectively.
Moves :
Type 1 : We cab remove 2 coins from left pile and 1 coin from right pile.
Type 2 : We can remove 1 coin from left pile and 2 coins from right pile.

Let we performed type 1 x times and type 2 y times.
Therefore,
a  = 2*x + y
b = 2*y + x
and if this equation has roots as non negative integers we have a way else not
Solving this equations give x = (2a -b)/3 and y = (2b - a)/3
*/
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if((2*a-b >=0) && (2*b - a >=0) && ((2*a - b) % 3 ==0) && (2*b - a) % 3 ==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
