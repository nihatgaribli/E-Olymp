#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m , t , k , n = 0 ;
    cin >> m ;
    for( int i = 2 ; i <= m ; i++ )
    {
        t = m % i ;
        k = m / i ;
        if ( t == k ) n++;
    }
    cout << n ;
    return 0 ;
}