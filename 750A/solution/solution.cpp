#include <iostream>
#include <math.h>
#include <algorithm> 

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int contestMins = 240 - k;
  // 5 * n * (n + 1) / 2 <= contestMins
  // n % 2 + n <= 2 * contestMins / 5 = c
  double c = contestMins * 2.0 / 5;
  double x = (-1 + sqrt(1 + 4 * c)) / 2;
  cout << min((int)floor(x), n) << endl;
}
