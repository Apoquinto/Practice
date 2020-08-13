#include <bits/stdc++.h>
using namespace std;

int main(){

int t;
string a;

cin >> a;

t = a.size();

for( int i = 0; i < t; i++ ){

  a[ i ] = tolower( a[ i ] );

  if( a[ i ] == 'a' || a[ i ] == 'e' || a[ i ] == 'i' || a[ i ] == 'o' || a[ i ] == 'u' || a[ i ] == 'y'  ){
    
      continue;
  
  }
  else{

    cout << '.' << a[ i ];

  }

}

return 0;
}