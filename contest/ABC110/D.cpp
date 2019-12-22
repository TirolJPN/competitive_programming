#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;

const int MAX = 210000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];
void COMinit(){
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for(int i = 2; i < MAX; i++){
        fac[i] = fac[i-1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD/i) % MOD;
        finv[i] = finv[i-1] * inv[i] % MOD;
    }
}
long long COM(int n, int k){
    if(n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n-k] % MOD) % MOD;
}


// ref : https://ei1333.github.io/luzhiled/snippets/math/prime-factor.html
// 素因数分解をし、その出現回数をmapに格納する関数
map< ll, ll > prime_factor(ll n) {
  map< ll, ll > ret;
  for(int64_t i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}


int main(int) {
  int N, M;
  map< ll, ll> map_exp;
  cin >> N >> M;
  map_exp = prime_factor(M);
  long long answer = 1;

  COMinit();
  for (auto iter = map_exp.begin(); iter != map_exp.end(); iter ++) {
    int tmp_exp = iter->second;
    // cout << iter->first << " : " << iter->second << "\n";
    long long tmp_ans = COM(tmp_exp + N - 1, N - 1);
    answer = (answer * tmp_ans) % MOD;
  }
  cout << answer;
  return 0;
}