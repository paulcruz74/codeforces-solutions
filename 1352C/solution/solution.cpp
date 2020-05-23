#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", (k - 1) / (n - 1) + k);
  }
}
