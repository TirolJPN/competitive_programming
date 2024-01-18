#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
#define rep(i,n) for (ll i = 0; i < (n); i++)
using ll = long long;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  ll n, q;
  cin >> n >> q;

  vector<ll> r(n);
  rep(i,n) {
    cin >> r.at(i);
  }
  // r を降順に並べる
  sort(r.rbegin(), r.rend());

  vector<ll> query, order_query;
  rep(i,q) {
    ll q_i;
    cin >> q_i;
    query.push_back(q_i);
    order_query.push_back(q_i);
  }
  sort(order_query.begin(), order_query.end());

  map<ll, ll> result;
  map<ll, ll> stack;
  result[order_query[0]] = 0;
  stack[order_query[0]] = 0;


  // すべての order_query についてループ
  rep(i,q) {
    if (i > 0 && !result.count(order_query[i])) {
      result[order_query[i]] = result[order_query[i-1]];
      stack[order_query[i]] = stack[order_query[i-1]];
    }
    // q_i の結果を求める
    while(true) {
      ll next_r = r.back();
      if ((stack[order_query[i]] + next_r) <= order_query[i]) {
        result[order_query[i]] += 1;
        stack[order_query[i]] += next_r;
        r.pop_back();
      } else {
        break;
      }
    }
  }

  rep(i,q) {
    cout << result[query[i]] << endl;
  }
}