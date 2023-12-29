#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n , i , j , count = 0 ;
    cin >> n ;
    vector < vector < int > > vec( n , vector < int >  ( n ) ) ;
    for( i = 0 ; i < n ; i ++ )
        for( j = 0 ; j < n ; j ++ )
            cin >> vec[i][j] ;
    for( i = 0 ; i < n ; i ++ )
        for( j = 0 ; j < n ; j ++ )
            if( vec[i][j] == 1 ) count ++ ;
    cout << count/2 ;
    return 0 ;
}