#include <bits/stdc++.h>

using namespace std;

int main(){

long x, y, sx, sy, px, py, mcm;

cin >> y >> x;

cin >> sy >> sx;

cin >> py >> px;

mcm = ( x / __gcd( x, sx ) ) * sx;

x = mcm / sx;

mcm = ( y / __gcd( y, sy ) ) * sy;

y = mcm / sy;

mcm = ( x / __gcd( x, y ) ) * y;

cout << mcm;

return 0;

}