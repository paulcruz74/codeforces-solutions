#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct person {
  int str;
  int bonus;
};

bool compareDragons(person d1, person d2) {
  return d1.str < d2.str || (d1.str == d2.str && d1.bonus > d2.bonus);
}

int main() {
  person player;
  cin >> player.str;
  int n;
  cin >> n;

  vector<person> dragons;
  for (int i = 0; i < n; i++) {
    person dragon;
    cin >> dragon.str >> dragon.bonus;
    dragons.push_back(dragon);
  }

  sort(dragons.begin(), dragons.end(), compareDragons);
  for (int i = 0; i < n; i++) {
    if (player.str <= dragons[i].str) {
      cout << "NO" << endl;
      return 0;
    }

    player.str += dragons[i].bonus;
  }

  cout << "YES" << endl;
}
