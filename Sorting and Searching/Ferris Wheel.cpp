#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*
There are n
 children who want to go to a Ferris wheel, and your task is to find a gondola for each child.

Each gondola may have one or two children in it, and in addition, the total weight in a gondola may not exceed x
. You know the weight of every child.

What is the minimum number of gondolas needed for the children?


In this question, we first sort all the children according to their weights and we proceed with trying to club heaviest children with 
lightest because that's best we can do with heaviest children and if we could not club him with the lighest children we will not be able
to club him with anyone else.

Therefore,if sum of children from end and start is less than equal to k we clubb them and incrrease i and decrease j and if sum is greater
than x then we just decrease k.

In this way we are able to find out at maximum how many pairs we can form then ans will be just n - number of pairs.


*/
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    ll ans = 0;
    ll i=0,j = n-1;

    while(i<j)
    {
        if(a[i]+a[j]<=x)
        {
            i++;
            j--;
            ans++;
        }
        else
        {
            j--;
        }
    }
    


    cout<< n - ans <<endl;
    return 0;
}
