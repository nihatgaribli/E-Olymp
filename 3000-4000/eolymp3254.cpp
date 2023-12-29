#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n , i = 0 , S = 0 , k, t ;
    cin >> n ;
    while(n)
    {
        k = n % 10 ; 
        t = k * pow( 2 , i );
        S+=t;
        i++;
        n/=10;
    }
    cout << S ;
}