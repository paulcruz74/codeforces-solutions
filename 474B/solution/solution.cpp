#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  vector<int> last_worm;
  int cum_sum = 0;
  for (int i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);
    cum_sum += a;
    last_worm.push_back(cum_sum);
  }

  int m;
  scanf("%d", &m);
  for (int i = 0; i < m; i++) {
    int q;
    scanf("%d", &q);

    printf("%ld\n", lower_bound(last_worm.begin(), last_worm.end(), q) - last_worm.begin() + 1);
  }
}
