#include <bits/stdc++.h>

using namespace std;

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    cout<<"res:"<<res<<endl;
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int main(){

	std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    cout<<binpow(n,m);

  
  
  


    return 0;
}
