#include <iostream>

using namespace std;

int main() {
  int k, r;
  cin >> k >> r;
  int n = 1;
  while (n * k % 10 != 0 && n * k % 10 != r) {
    n++;
  }

  cout << n << endl;
}
