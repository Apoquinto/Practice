#include <bits/stdc++.h>

using namespace std;

bool criba[ 1000005 ];

void cribas(){

  for ( int i = 2; i < 1000; i++ ){

    if( !criba[ i ] ){

      for( int j = 2; i * j < 1000000 ; j++ ){

        criba[ i * j ] = true;

      }

    }

  }

}

int main(  ) {

  int q, qi;
  cribas();

  cin >> q;

  for( int i = 0; i < q; i++ ){

    cin >> qi;

    if( !criba[ qi ] ){
      
      cout <<"Si\n";
    
    }
    else{

      cout <<"No\n";

    }

  }


  

  return 0;

}