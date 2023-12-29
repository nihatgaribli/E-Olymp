#include<bits/stdc++.h>
using namespace std ;
int main()
{
    bool t = false ;
    int n , m , d ;
    cin >> n >> m ;
    int a[n];
    for( int i = 0 ; i < n ; i++ )
    cin >> a[i] ;
    while(m)
    {
        cin >> d ; 
        for( int i = 0 ; i < n ; i++ )
        {
            if( d == a[i] )
            {
                cout << "YES" ; t = true ; break ;
            }
        }
        if( t == false ) cout << "NO";
    m-=1;
    }
    return 0 ;
}