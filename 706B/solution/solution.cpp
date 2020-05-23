#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int binary_search(vector<int> prices, int target) {
  int start = 0;
  int end = prices.size() - 1;
  while (true) {
    int mid = start + (end - start + 1) / 2;
    if (prices[mid - 1] <= target && prices[mid] > target) return mid;
    else if (prices[mid] <= target) {
      if (mid == end) return mid + 1;
      start = mid + 1;
    } else {
      if (mid == start) return start;
      end = mid - 1;
    }
  }
}

int main() {
  int n;
  scanf("%d", &n);
  vector<int> prices;
  for (int i = 0; i < n; i++) {
    int price;
    scanf("%d", &price);
    prices.push_back(price);
  }

  sort(prices.begin(), prices.end());
  int q;
  scanf("%d", &q);
  for (int i = 0; i < q; i++) {
    int money;
    scanf("%d", &money);
    printf("%d\n", binary_search(prices, money));
  }
}
