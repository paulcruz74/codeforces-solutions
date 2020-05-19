#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p;
  int max = -1;
  for (int i = 0; i < n; i++) {
    int pi;
    cin >> pi;
    p.push_back(pi);
    max = std::max(max, pi);
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans += max - p[i];
  }

  cout << ans << endl;
}
