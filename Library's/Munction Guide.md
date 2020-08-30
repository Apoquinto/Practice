# Function Guide
A list of functions that I am learning in c++ to speed up my coding.

## Min( a, b );
Returns the smallest value of two integers.
- Useful for performing operations without saving variables.

## Max( a, b );
Returns the largest value of two integers.
- Useful for performing operations without saving variables.

## array optimizers
```cpp
ios_base::sync_with_stdio(0);
cin.tie(0);
```
- reduce the time to read an array.

## stack
Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), where elements are inserted and extracted only from one end of the container.
This container allows you to implement stacks with their respective functions:
```cpp
#include <bits/stdc++.h>

using namespace std;

void showstack( stack < int > s );

int main() {
  /*
  Declaration
  stack < data type > stackn
  */
  stack < int > battery;
  /*
  name.pop( variable );
  */
  battery.push( 1 );
  battery.push( 2 );
  battery.push( 3 );
  /*
  showstack( stackn );
  */
  showstack( battery );
  /*
  stackn.size(  );
  */
  cout << battery.size(  ) << '\n';
  /*
  stack.pop();
  */
  battery.pop();

  showstack( battery );

  return 0;

}

void showstack( stack < int > s ) { 
    
    while ( !s.empty(  ) ){ 

        cout << s.top(  ) << ' '; 
        s.pop(  ); 
    
    }

    cout << '\n'; 

}
```

reference: http://www.cplusplus.com/reference/stack/stack/

## stack
queues are a type of container adaptor, specifically designed to operate in a FIFO context (first-in first-out), where elements are inserted into one end of the container and extracted from the other.
```cpp
#include <bits/stdc++.h>

using namespace std;

void showQueue( queue < int > copy ){

  while( !copy.empty(  ) ){

    cout << copy.front(  ) << ' ';

    copy.pop(  );

  }

  cout << '\n';

}

int main() {

  queue < int > values;

  values.push( 1 );
  values.push( 2 );
  values.push( 3 );
  values.push( 4 );
  values.push( 5 );
  
  showQueue( values );

  cout << values.size(  ) << '\n';

  cout << values.front(  ) << '\n';

  cout << values.back(  ) << '\n';

  values.pop(  );

  showQueue( values );
  
  return 0;

}
```