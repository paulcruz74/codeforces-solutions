#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int test;
    cin >> test;
    cout << (test / 2 - (test % 2 == 0 ? 1 : 0)) << endl;
  }
}
