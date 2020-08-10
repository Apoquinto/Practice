int binarySearch( int elementos, int q ){

    int p = 0, f = elementos - 1, m;
    
    while( p != f ){
    
        m = ( p + f ) / 2;
    
        if( arr[ m ] < q ){
    
            p = m + 1;
    
        }
    
        else{
    
            f = m;
    
        }
    
    }

    return f;

}