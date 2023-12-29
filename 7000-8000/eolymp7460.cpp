#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >>b >> c ;
    int n = a/c ;
    if( a%c != 0 ) n+=1 ;
    int m = b/c ;
    if( b%c != 0 ) m+=1 ;
    cout << m+n ;
    return 0 ;
}