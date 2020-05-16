#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> coins;
  coins.push_back(100);
  coins.push_back(20);
  coins.push_back(10);
  coins.push_back(5);
  coins.push_back(1);
  int ans = 0;
  for (int i = 0; i < coins.size(); i++) {
    int coin = coins[i];
    ans += n / coin;
    n %= coin;
  }

  cout << ans << endl;
}
