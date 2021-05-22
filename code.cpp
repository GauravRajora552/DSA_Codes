#include <bits/stdc++.h>

using namespace std;
void power(long long M,int t){

    long long count=0;
    while(t--){
	    long long n;
	    cin>>n;
        long long count=pow(2,(n-1));
        cout<<(count%M)<<endl;
    }
    
}
int main() {
	// your code goes her
	int t;
	cin>>t;
	long long M=1000000007;
	power(M,t);
    
	return 0;
}
