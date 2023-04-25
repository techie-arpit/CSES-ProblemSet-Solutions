#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

In this question, we are given a DNA sequence and we need to find longest repetition in sequence so we just travel along the string
and if we got some repetition we run a while loop till we keep getting same chaeracter and update the ans by max value of current answer
and previous answer.
*/
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin>>s;

    ll temp_ans = 0 , ans = 0;

    ll n= s.size();
    for(ll i=0;i<n ; i++)
    {
        ll temp_ans = 1;
        while(s[i]==s[i+1] && i<n-1)
        {
            temp_ans++;
            i++;
            // cout<<"HEre"<<endl;
        }
        ans = max(ans,temp_ans);

    }

    cout<<ans;
    
    return 0;
}
