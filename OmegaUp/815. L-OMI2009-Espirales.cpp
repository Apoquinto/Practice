#include <bits/stdc++.h>

using namespace std;

int x, y, r[ 1003 ][ 1003 ];

int recur( int a, int b ){

    if( a == 1 ) return b;
    if( b == 1 ) return a;
    
    if( r[ a ][ b ] != 0 ){
    
        return r[ a ][ b ];
    
    }
    
    r[ a ][ b ] = ( recur( a, b - 1 ) + recur( a - 1, b ) + 1 ) % 1000000000;
    
    return r[ a ][ b ];

}

int main(){

    ios_base::sync_with_stdio( 0 );
    cin.tie( 0 );

    cin >> x >> y;

    cout << recur( x, y );

    return 0;

}