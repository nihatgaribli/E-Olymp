#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string str ;
    int count = 0 ;
    getline( cin , str ) ;
    cout << str[1] << str[3] << str[9] << endl ;
    cout << str[0] << str[1] << str[str.length() - 1] << endl ;
    for( int i = str.length() - 5 ; i < str.length() ; i++ )
    cout << str[i];
    cout << endl ;
    for( int i = 0 ; i < str.length() - 4 ; i++ )
    cout << str[i] ;
    cout << endl ;
    for( int i = 0 ; i < str.length() ; i += 2 )
    {
        cout << str [i] ;
        count ++ ;
    }
    cout << endl << count << endl ;
    for( int i = str.length() - 1 ; i >= 0 ; i -= 2 )
    cout << str[i] ; 
}