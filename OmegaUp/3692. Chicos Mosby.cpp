#include <bits/stdc++.h>
using namespace std;

int x,y,r,c;

int main(){
cin >> x >> y;

while( x != 0 ){
    if( y > x){
        swap(x,y);
    }
    c = x / y;
    x = x - ( y * c );
    r += c;
}

cout << r;

return 0;

}