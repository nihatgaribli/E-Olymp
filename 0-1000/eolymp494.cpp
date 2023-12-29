#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int count = 0 ;
    string a = { 'A' , 'E' , 'I' , 'O' , 'U' , 'Y' } , b;
    getline( cin , b );
    
    for ( int i = 0 ; i < b.length() ; i++ )
    {
        for( int j = 0 ; j < 6 ; j++ )
        {
            if( toupper(b[i]) == a[j] )count++ ;
        }
    }
    cout << count ;
    return 0 ;
}