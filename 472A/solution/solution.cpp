#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int k) {
  double rt = sqrt(k);
  for (int j = 2; j <= rt; j++) {
    if (k % j == 0) return false;
  }

  return true;
}

int main() {
  int n;
  cin >> n;
  for (int i = 4; i <= n; i++) {
    if (!isPrime(i) && !isPrime(n - i)) {
      cout << i << " " << n - i << endl;
      return 0;
    }
  }
}
