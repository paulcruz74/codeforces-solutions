#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  unordered_map<int, int> portals;
  for (int i = 0; i < n - 1; i++) {
    int add;
    cin >> add;
    portals[i] = i + add;
  }

  bool canReach = false;
  int curr = 0;
  while (true) {
    if (curr == t - 1) {
      canReach = true;
      break;
    } else if (curr == n - 1) {
      break;
    }

    curr = portals[curr];
  }

  cout << (canReach ? "YES" : "NO") << endl;
}
