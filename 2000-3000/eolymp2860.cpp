#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b ;
    cin >> a >> b ;
    if( (b - a) % 2 == 0 ) cout <<  (b*b - a*a ) / 2 + (a+b) / 2;
    else cout << (b + a)*(b-a+1) / 2 ;
    return 0 ;
}