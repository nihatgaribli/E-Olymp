#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n , k , max = 0 ;
    cin >> n ; 
    while( n )
    {
        k = n%10 ;
        if( k == 9 ){ cout << "k" ; break ;}
        else if( k > max ) max=k ;
        n/=10 ;
    }
    if( k != 9 ) cout << max ;
    return 0 ;
}