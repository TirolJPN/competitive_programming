#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);


  int n;
  string result;
  cin >> n;

  for (int i=0; i<n; i++) {
    result.append(to_string(n));
  }

  cout << result << endl;

  return 0;
}