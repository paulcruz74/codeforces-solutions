#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int min = std::min(a, std::min(b, c));
  int max = std::max(a, std::max(b, c));
  cout << max - min << endl;
}
