#include <bits/stdc++.h>
using namespace std;

int main(){

int n, s, b, max = 0, act = 0;

cin >> n;

for( int i = 0; i < n; i++ ){

  cin >> b >> s;

  act += s - b; 

  if( act > max ){

    max = act;
  
  }

}

cout << max;

return 0;

}