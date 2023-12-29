#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a , b , x ;
    cin >> a >> b >> x ;
    int q = a/x ;
    int t = b/x;
    cout << ( t*x - q*x ) / 3 ;
    return 0 ;
}