#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

Your task is to find out the number in row y
 and column x
.

In this question, we are given a spiral pattern and we need to determine the element in yth column and xth row.
First we observe that each row follows a increasing or deccreasng order along that row for that row number and same is for columns

So, we proceed first with determining which is bigger row number or column number and then by checking if the max is odd or even we can see 
if it is increasing or decreasing and find the element with the help of perfect square from this row - column or previous row-column
by observing the pattern.
*/

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll y, x;
        cin >> y >> x;

        ll z = max(y, x);
        if (z == y)
        {
            if (y % 2 == 1)
            {
                cout << (y - 1) * (y - 1) + x << endl;
            }
            else
            {
                cout << y * y - x + 1 << endl;
            }
        }

        else
        {
            if(x%2==1)
            {
                cout<<x*x - y+1<<endl;
            }
            else
            {
                cout<<(x-1)*(x-1)+y<<endl;
            }
        }
    }

    return 0;
}
