#include <iostream>

using namespace std;

int main(int) {
  int n;
  cin >> n;
  if ((n % 111) == 0) cout << n;
  else cout << ((n / 111) + 1) * 111;
}