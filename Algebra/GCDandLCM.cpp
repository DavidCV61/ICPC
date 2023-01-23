#include <bits/stdc++.h>

using namespace std;


long long gcd (long long   a, long long  b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
long long lcm (long long  a,long long  b) {
    return a / gcd(a, b) * b;
}
int main(){

	std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--){


   long long n,m;
    cin>>n>>m;
    cout<<gcd(n,m)<<" "<<lcm(n,m)<<endl;;
   

    }




   

  
  
  


    return 0;
}
