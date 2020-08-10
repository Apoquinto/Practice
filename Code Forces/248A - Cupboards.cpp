#include <bits/stdc++.h>
using namespace std;

int main(){

int n, l, r, res, tl = 0, tr = 0;

cin >> n;

for( int i = 0; i < n; i++ ){

  cin >> l >> r;

  tl += l;

  tr += r;

}

cout << min( tl, n - tl ) + min( tr, n - tr );

return 0;

}