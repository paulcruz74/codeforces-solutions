#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> sums;
  int max = -1;
  for (int i = 0; i < 4; i++) {
    int sum;
    cin >> sum;
    if (max < sum) {
      if (max != -1) sums.push_back(max);
      max = sum;
    } else {
      sums.push_back(sum);
    }
  }

  for (int i = 0; i < sums.size(); i++) {
    cout << max - sums[i] << " ";
  }

  cout << endl;
}
