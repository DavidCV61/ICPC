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

int main(){

	std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    cout<<binpow(n,m);

  
  
  


    return 0;
}
