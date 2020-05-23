#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  long long total_sum = 0;
  vector<long long> partial_sums;
  for (int i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);
    total_sum += a;
    if (i < n - 1) partial_sums.push_back(total_sum);
  }

  if (total_sum % 3 != 0) {
    printf("0\n");
    return 0;
  }

  long long first = total_sum / 3;
  long long second = first * 2;
  vector<int> first_idx;
  vector<int> second_idx;
  for (int i = 0; i < partial_sums.size(); i++) {
    if (partial_sums[i] == first) first_idx.push_back(i);
    if (partial_sums[i] == second) second_idx.push_back(i);
  }

  long long ans = 0;
  for (int i = 0; i < first_idx.size(); i++) {
    ans += second_idx.end() - upper_bound(second_idx.begin(), second_idx.end(), first_idx[i]);
  }

  printf("%lld", ans);
}
