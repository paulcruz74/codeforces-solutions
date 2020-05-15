#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main() {
  int n, l;
  cin >> n >> l;

  vector<int> lights;

  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    lights.push_back(k);
  }

  std::sort(lights.begin(), lights.end());

  double max = std::max(lights.front(), l - lights.back());

  for (int i = 0; i < lights.size() - 1; i++) {
    max = std::max(max, (lights[i + 1] - lights[i]) / 2.0);
  }

  printf("%.10f", max);  
}
