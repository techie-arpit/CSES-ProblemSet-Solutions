#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ll n;
    cin>>n;
    while(1)
    {
        if(n==1){cout<<1; break;}
        else if(n%2==1){cout<<n<<" "; n = 3*n + 1 ; }
        else{ cout<<n<<" "; n = n /2;}
    }
    return 0;
}
