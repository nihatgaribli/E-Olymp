#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n , count = 0 ;
    cin >> n ;
    int a[n] ;
    for ( int i = 0 ; i < n ; i++ )
    cin >> a[i] ;   
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = i+1 ; j < n ; j++ )
        {
            if ( a[i] == a[j] ) count++ ;
        }
        if ( count > n/2 ) { cout << a[i] ; break ;}
    }
    if( count <= n/2 ) cout << -1 ;

return 0 ;
}