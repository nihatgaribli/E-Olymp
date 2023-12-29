#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n ;
    cin >> n ;
    int i ;
    for( i = 1 ; i < n ; i += 2 )
    if( n%i == 0 ) cout << i << endl ;
    return 0 ;
}