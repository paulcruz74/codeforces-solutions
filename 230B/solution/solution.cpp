#include <iostream>
#include <math.h>
#include <stdio.h> 

using namespace std;
 
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    long long x;
    scanf("%lld", &x);
 
    long long rt = sqrt(x);

    bool isPrime = true;
    for (long long d = 2; d*d <= rt; d++) {
      if (x % d == 0) {
        isPrime = false;
        break;
      }
    }

    if (isPrime && rt * rt == x && rt != x) {
      printf("YES\n"); 
    } else {
      printf("NO\n");
    }
  }
}
