#include <iostream>

using namespace std;

int main() {
  int n, max, min;
  cin >> n;
  max = -1;
  min = -1;
  int amazing = 0;
  for (int i = 0; i < n; i++) {
    int score;
    cin >> score;
    if (i == 0) {
      max = score;
      min = score;
    } else {
      if (max < score) {
        amazing++;
        max = score;
      }

      if (min > score) {
        amazing++;
        min = score;
      }
    }
  }

  cout << amazing << endl;
}
