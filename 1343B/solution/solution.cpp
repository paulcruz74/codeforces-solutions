#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    if (n % 4 != 0) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
      int k = n / 2;
      for (int j = 0; j < k; j++) {
        cout << 2 * (j + 1) << " ";
      }

      for (int j = 0; j < k - 1; j++) {
        cout << 2 * j + 1 << " ";
      }

      int last = (2 * k + 2) * k / 2 - (2 * k - 2) * (k - 1) / 2;
      cout << last << endl;
    }
  }
}
