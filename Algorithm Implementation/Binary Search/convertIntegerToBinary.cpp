string convertToBinary( int x ){

  string s;

  for ( int i = 31; i >= 0; i-- ){

    if( x & ( 1 << i ) ){

      s += '1';

    }
    else{

      s += '0';

    }

  }

  return s;

}