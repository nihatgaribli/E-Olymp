#include<bits/stdc++.h>
using namespace std ; 
int main()
{
    int a , b ;
    cin >> a >> b ;
    a = abs(a) ;
    int tam = a/b;
    int qaliq = a%b;
    if( tam > 0 and qaliq > 0 ) cout << tam << " " << qaliq ;
    else cout << "Divisible" ;
    return 0 ;
}