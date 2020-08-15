#include <bits/stdc++.h>
using namespace std;

long long n, m;

long long g( long long x ){

    if( x % 2 ) return x * ( ( x + 1 ) / 2 );

    return ( x / 2 ) * ( x + 1 );

}

int main(  ){

cin >> n >> m;

cout << ( g( ( n / m ) - 1 ) * ( m - ( n % m ) ) ) + ( g( ( ( n + m - 1 ) / m ) - 1 ) ) * ( n % m ) << " " << g( n - m );

return 0;

}