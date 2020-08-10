int binarySearch( int q, int inicio, int finale ){
    
    if ( inicio == finale ) return inicio;

    int medio =  ( ( inicio + finale ) / 2 );
    
    if ( arr[ medio ] < q ){
        
        return binarySearch( q, medio + 1, finale);
    
    }
    else {

        return binarySearch( q, inicio, medio );
    
    }

}
