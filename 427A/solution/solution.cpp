#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int available = 0;
  int bad = 0;
  for (int i = 0; i < n; i++) {
    int event;
    cin >> event;
    if (event == -1 && available == 0) {
      bad++;
    } else {
      available += event;
    }
  }

  cout << bad << endl;
}
