#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int b = 3;
    while (b <= n) {
      if (n % b == 0) {
        cout << n / b << endl;
        break;
      }

      b = b * 2 + 1;
    }
  }
}
