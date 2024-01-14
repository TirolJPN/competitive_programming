#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);


  int b, g;
  cin >> b >> g;

  cout << (b > g ? "Bat" : "Glove");

  return 0;
}