#include <bits/stdc++.h>
using namespace std;

int x , y, o, yi, xi, yf, xf;

struct nodo{

    int nx, ny, k;

} a, b, c;

bool mapa[ 53 ][ 53 ];
queue < nodo > cola;

int main(  ){

ios_base::sync_with_stdio( 1 );
cin.tie( 0 );

cin>> y >> x;

for( int i = 0; i < y; i++ ){
    for( int ix = 0; ix < x; ix++ ){
        cin>> o;
        if( o == 1 ) mapa[ ix ][ i ] = true;
    }
}

cin >> yi >> xi >> yf >> xf;
a.nx = xi;
a.ny = yi;
a.k = 0;
cola.push( a );

while( cola.front().ny != yf || cola.front().nx != xf ){
    b.nx = c.nx = cola.front().nx;
    b.ny = c.ny = cola.front().ny;
    c.k = cola.front().k + 1;

    if( b.nx > 0 && !mapa[ b.nx - 1 ][ b.ny ]){
        c.nx--;
        cola.push( c );
        mapa[ b.nx - 1 ][ b.ny ] = true;
        c.nx++;
    }

    if( b.nx < x - 1 && !mapa[ b.nx + 1 ][ b.ny ]){
        c.nx++;
        cola.push( c );
        mapa[ b.nx + 1 ][ b.ny ] = true;
        c.nx--;
    }

    if( b.ny > 0 && !mapa[ b.nx ][ b.ny - 1 ]){
        c.ny--;
        cola.push( c );
        mapa[ b.nx ][ b.ny - 1 ] = true;
        c.ny++;
    }

    if( b.ny < y - 1 && !mapa[ b.nx ][ b.ny + 1 ]){
        c.ny++;
        cola.push( c );
        mapa[ b.nx ][ b.ny+1 ] = true;
        c.ny--;
    }

    cola.pop();

}

cout<< cola.front().k + 1;

return 0;

}