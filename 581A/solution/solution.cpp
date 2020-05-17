#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int min = std::min(a, b);
  int max = std::max(a, b);

  cout << min << " " << (max - min) / 2 << endl;
}
