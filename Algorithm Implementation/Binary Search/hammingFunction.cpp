/*
The hamming distance between two strings a and b of equal length is the number of positions where the strings are diffent
In this code implement two versions of this funtion with the same complexy time O(n^2*k) but different execution times.
*/

/* 
-| Iterative Version |-
Input: the two strings.
Return: The number of differences between the two strings
Time: 30 times slower than the iterative version, but you need to convert the strings to integers.
*/
int hamming( string a, string b ){

    int d = 0;

    for( int i = 0; i < n; i ++ ){

        if( a[ i ] != b[ i ] ){

            d++;

        }

    }

    return d;

}

/* 
-| Binary Version |-
Input: The integer values ​​of the bit list.
Return: The number of differences between the two strings
Time: 30 times faster than the iterative version, but you need to convert the strings to integers.
*/
int hamming( int a, int b ){

  return __builtin_popcount( a ^ b );

}