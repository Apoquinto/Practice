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
