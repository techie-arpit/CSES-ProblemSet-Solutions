#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*
Consider an algorithm that takes as input a positive integer n
. If n
 is even, the algorithm divides it by two, and if n
 is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n
 is one. For example, the sequence for n=3
 is as follows:
3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of n
.

In this question, we are given a number n and we are given some operation to perform on n depending on if n is odd or even.
This is very interesting sequence as it always end to 1.
Therefore, we first run the while loop till n is not equal to 1 and check if n is even update n by n/2 and if n is odd update n by 3*n+1

*/
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    while(n>1)
    {
        if(n%2==1){cout<<n<<" "; n = 3*n+1 ;}
        else{cout<<n<<" "; n = n/2 ;}
    }
    cout<<n;
    return 0;
}
