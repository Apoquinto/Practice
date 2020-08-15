#include <bits/stdc++.h>
using namespace std;

int n, t, q, qi, r, a[ 1000000 ], c = 1, pos;

int main(  ){

ios_base::sync_with_stdio(0); 
cin.tie(0);

cin >> n;

for( int i = 0; i < n; i++ ){
    cin >> t;
    a[ i ] = t + r;
    r = a[ i ];
}

cin >> q;

for( int i = 0; i < q; i++ ){
    cin >> qi;
    for( int j = 0; j < n; j++){
        if( qi <= a[ j ] ){
            pos = j + 1;
            break;
        }
    }
    cout << pos << " ";
}

return 0;
}