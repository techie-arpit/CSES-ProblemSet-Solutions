#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
In this question, we need to find the number of ways  we can put two knights on chess board such that they do not attack each other.

So , first we can find out total number of ways to place two knights which will be n choose 2 = n*(n-1) / 2.
temp2 variable in function ans refers to this total number of ways.

Then total number of ways to place them such that they attack each other can be thought of using following way.
I will denote position of square using x,y where x will tell row and y will tell column.
So we can place first knight on (1,1) and second on (2,3) and then we can move this two knights to the right n-2 times and bottom n-1 times
and same thing can be done with this knights in vertical orientation. Therefore this aere 2*(n-1)*(n-2) ways and
In other way we can keep 1st knight on (2,1) and second knight on (1,3) and perform same steps again.

Therefore, total number of ways is 4*(n-1)*(n-2).
temp2 variable in ans function refers to this total number of possible ways to keep attacking knights.
Therefore, final answer is temp2 - temp.
*/

ll ans ( ll n)
{
    ll ns = n*n;
    ll temp = 4*(n-1)*(n-2);
    ll temp2 = (ns*(ns-1))/2 ; 
    return temp2 - temp;
}
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;

    for(ll i =1 ; i<=n;i++)
    {
        cout<<ans(i)<<endl;
    }
    return 0;
}
