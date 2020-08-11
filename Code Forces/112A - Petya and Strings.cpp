#include <bits/stdc++.h>
using namespace std;

int main(){

int t, v1, v2;
string a, b;

cin >> a >> b;

t = a.size();

for( int i = 0; i < t; i++ ){

  a[ i ] = tolower( a[ i ] );
  b[ i ] = tolower( b[ i ] );

  if( a[ i ] != b[ i ] ){
    
    v1 = a[ i ];
    v2 = b[ i ];

    if( v1 > v2 ){

      cout << "1";
      break;

    }
    else{

      cout << "-1";
      break;

    }
  
  }
  else if( i == t - 1 ){

    cout << "0";

  }

}

return 0;

}