#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*
In this question, we are given a string and we need to rearrange it to make it a palindrome.
First we check if more than one character has odd occurenences it will not be possible to make given string a pallindrome.
If only one letter have odd occurence we can keep that letter at mid and arrange  other charcaters to make it pallindrome.
First, by making arrray a of size 26, I counted the number of occurences of each letter.
a[0] tells number of occurence of 'A' , a[1] tells 'B' and so on.

Now first for loop will print the left half of pallindrome that is each character  appears half times it total occurence and
then at the end we see if there is odd times occuring character and if there is we print it. Then we perform the step 1 again in
reverse way which makes each character get there correspondig place to make a pallindrome.
*/
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    string s;
    cin>>s;
    ll n = s.size();
    ll a[26] = {0};
    for(ll i=0;i<n;i++)
    {
        a[s[i] - 'A'] ++ ;
    }
    ll odd = 0 ;
    ll store ; 
    for(ll i =0;i<26;i++)
    {
        if(a[i]%2==1)
        {
            odd++;
            store = i;
        }
    }

    if(odd>1)
    {
        cout<<"NO SOLUTION";
    }
    else
    {

        for(ll i =0; i<26;i++)
        {
            for(ll j = 0; j<a[i]/2 ; j++)
            {
                cout<<(char)(i+65);
            }
            
        }
            if(odd==1)
            {
                cout<<(char)(store+65);
            }
        for(ll i =25;i>=0;i--)
        {
            for(ll j=0;j<a[i]/2;j++)
            {
                cout<<(char)(i+65);
            }
        }
    }
    return 0;
}
