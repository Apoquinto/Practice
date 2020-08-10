    #include <bits/stdc++.h>
    using namespace std;
     
    string n;
    int t, aux, num[ 106 ];
     
    int main(){
     
    cin >> n;
     
    t = n.size();
     
    int cont = 0;
     
    for( int i = 0; i < t; i++ ){
     
      if( n[ i ] != '+' ){
     
        aux = n[ i ];
     
        num[ cont ] = aux - 48; 
     
        cont++;
     
      }
     
    }
     
    sort( num, num + cont );
     
    for( int i = 0; i < cont - 1; i++ ){
     
      cout << num[ i ] << '+';
     
    }
     
    cout << num[ cont - 1 ];
     
    return 0;
     
    }