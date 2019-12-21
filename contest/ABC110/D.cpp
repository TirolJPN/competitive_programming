#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
#define REP(i, n) for(int i=0; i<(n); ++i)
#define FOR(i, a, b) for(int i=(a); i<(b); ++i)
#define FORR(i, a, b) for(int i=(b)-1; i>=(a); --i)
const ll MOD=1000000007ll;
const int MAX = 51000000;

ll fact[MAX], fact_inv[MAX];

// 繰り返し二乗法
ll power(ll a, ll b){
	ll res=1;
	while(b>0){
		if(b&1) res=res*a%MOD;
		a=a*a%MOD;
		b>>=1;
	}
	return res;
}

ll comb(ll n, ll r){
	return (fact[n]*fact_inv[r])%MOD*fact_inv[n-r]%MOD;
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
  int answer = 1;

  int n=100000;
	// cin>>n;
	fact[0]=1;
        // 階乗の計算
	REP(i, n) fact[i+1]=fact[i]*(i+1)%MOD;
	fact_inv[n]=power(fact[n], MOD-2);
        // 逆元の計算
	FORR(i, 0, n) fact_inv[i]=fact_inv[i+1]*(i+1)%MOD;
  for (auto iter = map_exp.begin(); iter != map_exp.end(); iter ++) {
    int tmp_exp = iter->second;
    int tmp_ans = comb(tmp_exp + N - 1, tmp_exp);
    cout << iter->first << " : "  << iter->second << " : " << tmp_ans << "\n";
    answer *= tmp_ans;
  }
  cout << answer;
  return 0;
}