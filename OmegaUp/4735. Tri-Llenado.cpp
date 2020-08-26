#include <bits/stdc++.h>
using namespace std;
int n, dp[1000];
int resultado(int n){
	
		if ( n%2==1 ) return 0;
		
		if ( n==0 ) return 1;
		if ( n==2 ) return 3;
	
		if ( dp[n] != 0 ) return dp[n];
		dp[n] = 4*resultado(n-2) - resultado(n-4);
		return dp[n];
}

int main(){

cin>>n;

cout<<resultado(n);

return 0;	
}