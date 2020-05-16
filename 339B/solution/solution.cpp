#include <iostream>
#include <vector> 

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> tasks;
  for (int i = 0; i < m; i++) {
    int task;
    cin >> task;
    tasks.push_back(task);
  }

  long long time = 0;
  int curr = 1;

  for (int i = 0; i < m; i++) {
    if (tasks[i] >= curr) {
      time += tasks[i] - curr;
    } else {
      time += (n - curr) + 1 + (tasks[i] - 1);
    }
    curr = tasks[i];
  }

  cout << time << endl;
}
