#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a[5] , b[5] ;
    for( int i = 0 ; i < 5 ; i ++ )
    cin >> a[i] ;
    for( int i = 0 ; i < 5 ; i ++ )
    b[i] = a[i] ;
    for( int i = 1 ; i < 4 ; i ++ )
    b[i] = a[i-1] + a[i+1] ;
    for( int i = 0 ; i < 5 ; i ++ )
    cout << b[i] << " " ;
    return 0 ;
}