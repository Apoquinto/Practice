    #include <bits/stdc++.h>
    using namespace std;
     
    long long n, k, m;
     
    int main(){
     
    cin >> n >> k;
     
    if( n % 2 == 0 ){
      m = n / 2;
    }
    else{
      m = ( n / 2 ) + 1;
    }
     
    if( m >= k ){
      cout << ( 2 * k ) - 1;
    }
    else{
      cout << 2 * ( k - m );
    }
     
    return 0;
    }