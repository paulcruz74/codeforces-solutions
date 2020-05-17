#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  unordered_map<long long, long long> counts;
  for (int i = 0; i < n; i++) {
    long long a;
    cin >> a;
    counts[a]++;
  }

  long long scores[100001];
  scores[1] = counts[1];
  scores[2] = max(2 * counts[2], counts[1]);
  for (int i = 3; i < 100001; i++) {
    scores[i] = max(scores[i-1], i*counts[i] + scores[i-2]);
  }

  cout << scores[100000] << endl;
}
