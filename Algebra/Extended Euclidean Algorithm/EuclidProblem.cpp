#include <bits/stdc++.h>

using namespace std;


long long gcd(long long a, long long b, long long& x, long long& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
   long long d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    
    return d;
}
long long lcm (long long  a,long long  b) {
    return a / gcd(a, b) * b;
}


int main(){

	std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

 

   	long long a,b,x,y;

cin>>a>>b;

long long r=gcd(a,b,x,y);

cout<<x<<" "<<y<<" "<<r<<endl;







    return 0;
}
