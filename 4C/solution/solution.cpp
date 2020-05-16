#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> lines;
  unordered_map<string, int> umap;
  for (int i = 0; i < n; i++) {
    string line;
    cin >> line;
    lines.push_back(line);
  }
  
  for (int i = 0; i < n; i++) {
    string line = lines[i];
    if (umap[line] == 0) {
      cout << "OK" << endl;
    } else {
      cout << line << umap[line] << endl;
    }

    umap[line]++;
  }
}
