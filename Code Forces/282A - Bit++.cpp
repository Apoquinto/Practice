#include <bits/stdc++.h>
using namespace std;

int main(){

int n, r = 0;
string o;

cin >> n;

for( int i = 0; i < n; i++ ){

  cin >> o;

  if( o[ 0 ] == '+' || o[ 2 ] == '+' ){

    r++;

  }
  else{

    r--;

  }

}

cout << r;

return 0;

}