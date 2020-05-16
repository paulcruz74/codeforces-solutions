#include <iostream>

using namespace std;

int calculate(int n, int a, int b, int c) {
  int max = 0;
  for (int i = 0; i <= n / a; i++) {
    for (int j = 0; j <= (n - i * a) / b; j++) {
      int k = (n - i * a - j * b) / c;
      if (n == i * a + j * b  + k * c) {
        max = std::max(max, i + j + k);
      }
    }
  }

  return max;
}
int main() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  cout << calculate(n, a, b, c) << endl; 
}
