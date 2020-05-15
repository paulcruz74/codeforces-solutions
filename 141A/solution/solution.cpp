#include <iostream>
#include <unordered_map>

using namespace std;
int main() {
  unordered_map<char, int> umap;
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  for (int i = 0; i < s1.length(); i++) {
    umap[s1[i]]++;    
  }
  
  for (int i = 0; i < s2.length(); i++) {
    umap[s2[i]]++;    
  }
  
  for (int i = 0; i < s3.length(); i++) {
    if (umap[s3[i]] <= 0) {
      cout << "NO" << endl;
      return 0;
    }

    umap[s3[i]]--;
  }

  unordered_map<char, int>:: iterator itr; 
  for (itr = umap.begin(); itr != umap.end(); itr++) {
    if (itr->second) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
}
