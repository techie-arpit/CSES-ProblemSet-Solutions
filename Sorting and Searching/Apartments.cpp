#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*
There are n
 applicants and m
 free apartments. Your task is to distribute the apartments so that as many applicants as possible will get an apartment.

Each applicant has a desired apartment size, and they will accept any apartment whose size is close enough to the desired size.

In this question, we are given n applicants and m appartments and maximum adjustable size of appartment is k. To solve this question ,
first we can sort appartment sizes and applicant choice. Now we will see if the first applicant can buy a appartment or not 
if he can we move to next appartment and next applicant or if he could not we see if appartment size was bigger or his demand was bigger.

If appartment size was bigger we move to next applicant having bigger demand.

If demand was bigger we move to next bigger appartment

*/
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n] , b[m];
    for(ll i=0;i<n;i++){cin>>a[i];}
    for(ll i= 0 ;i<m;i++){cin>>b[i];}
    sort(a,a+n);
    sort(b,b+m);
    ll i=0;
    ll j=0;
    ll ans = 0;
    while(i<=n-1 && j<=m-1)
    {
        if(abs(a[i]-b[j]) <=k)
        {
            i++;
            j++;
            ans++;
        }
        else if(a[i]>b[j]+k)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
