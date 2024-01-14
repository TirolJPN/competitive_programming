#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

using ll = long long;

ll f(ll x, ll m) {
  return x/m;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  ll a, m, l, r, result;
  cin >> a >> m >> l >> r;

  l-=a;
  r-=a;

  // l が マイナスの場合は、0以上になるように、東にスライドする
  if (l <= 0) {
    ll X = -l/m + 1;
    l += X*m;
    r += X*m;
  }

  // 求める値は、0 ~ r にある本数から、 0 ~ (l-1) にある本数の差で求まる
  result = f(r, m) - f(l-1, m);
  cout << result << endl;

  return 0;
}