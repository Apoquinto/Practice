#include <bits/stdc++.h>
using namespace std;

int m, r, b, c, d, n;

bool check [1000000];
pair < int, int > cosa, o1, o2, op;
bool bb;
queue < pair < int, int > > cola;

int main(){

cin >> m >> b >> r;

cosa.first = 1;
cosa.second = 0;

cola.push( cosa );

op = cola.front(  );

while( cola.front().first != r ){
    
    op = cola.front();
    n = op.second;
    d = op.first;
    o1.second = o2.second = n+1;
    o1.first = d * m;

    if( o1.first >= 10000 ) o1.first = 1;
    
    if(!check[ o1.first ]){
    
        check[ o1.first ] = true;
        cola.push( o1 );
    
    }

    o2.first = d / b;
    
    if( !check[ o2.first ] ){
      
        check[ o2.first ] = true;
        cola.push( o2 )
        ;
    }
 
    cola.pop();

}

op = cola.front();
d = op.second;
cout << d;
return 0;

}