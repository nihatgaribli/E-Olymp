#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  k , n , count = 0 ;
    cin  >> n ;
    for( int i = n - 1 ; i > 0 ; i  -- )
    {
        if ( i % 2 != 0  and i % 3 != 0 and i % 5 != 0 )
        { k = i; break; }
    }
    cout << k ;
}