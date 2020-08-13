int convertToInt( string x ){

  int r = 0, size = x.size() - 1;

  for( int i = size; i >= 0; i-- ){

    if( x[ i ] == '1' ){

      r += ( 1 << ( size - i ) );

    }

  }

  return r;

}