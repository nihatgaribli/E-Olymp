#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n ;
    cin >> n ;
    swap( n[0] , n[3] );
    if ( n[0] == '0' and n[1] == '0') cout << n[3] ;
    else if ( n[0] == '0' and n[1] == '0') cout << n.substr(2,3);
    else if( n[0] == '0' ) cout << n.substr(1,3);
    else cout << n ;

}