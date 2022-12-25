#include <bits/stdc++.h>
 
using namespace std;
 
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
 
int main(){
 
	std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
 
    long long n;
    cin>>n;
 
    long long f=binpow(4,n-3);
 
    cout<<f*(9*n-3)<<endl;
 
  
  
  
 
 
    return 0;
}
