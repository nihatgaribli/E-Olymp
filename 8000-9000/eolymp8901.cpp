#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n , count = 0 ;
    cin >> n ;
    while(n)
    {
        count ++ ;
        n /= 10 ;
    }
    long long t = pow( 10 , count  ) ;
    cout << t ;
}