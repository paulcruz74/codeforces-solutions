#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> parts;
    int mult = 1;
    while (n > 0) {
      if (n % 10 != 0) parts.push_back(n % 10 * mult);
      mult *= 10;
      n /= 10;
    }

    cout << parts.size() << endl;
    for (int j = 0; j < parts.size(); j++) {
      cout << parts[j] << " ";
    }

    cout << endl;
  }
}
