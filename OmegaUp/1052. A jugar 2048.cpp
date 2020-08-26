#include <bits/stdc++.h>
using namespace std;

int main (){

int n, b = 0;

cin >> n;

int x[ n ];

for ( int i = 0; i < n; i++ ){

    cin >> x[ b ];

    while( b != 0 && x[ b ] == x[ b - 1 ] ){

        x[ b - 1 ] = x[ b - 1 ] * 2;

        b--;

    }

    b++;

}

cout << b << endl;

for ( int ix = b - 1; ix >= 0; ix-- ){
 
    cout << x[ ix ] << endl;

}

return 0;

}