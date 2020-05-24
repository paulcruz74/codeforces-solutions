#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stdlib.h>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  vector<int> boys;
  for (int i = 0; i < n; i++) {
    int boy;
    scanf("%d", &boy);
    boys.push_back(boy);
  }

  int m;
  scanf("%d", &m);
  vector<int> girls;
  for (int i = 0; i < m; i++) {
    int girl;
    scanf("%d", &girl);
    girls.push_back(girl);
  }

  sort(boys.begin(), boys.end());
  sort(girls.begin(), girls.end());
  int b = 0;
  int g = 0;
  int count = 0;
  while (b < boys.size() && g < girls.size()) {
    if (abs(boys[b] - girls[g]) <= 1) {
      b++;
      g++;
      count++;
      continue;
    }

    if (boys[b] < girls[g]) {
      b++;
    } else {
      g++;
    }
  }

  printf("%d\n", count);
}
