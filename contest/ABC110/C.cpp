#include <iostream>
#include <vector> 
#include <algorithm>
#include <map>
using namespace std;
 
// ref: http://drken1215.hatenablog.com/entry/2018/09/23/232100
int main() {
  string S, T;
  cin >> S >> T;
  bool ok = true;
  map<char,char> s_map, t_map;
  for (int i = 0; i < S.size(); i++) {
    char s = S[i], t = T[i];
    // m.count()の戻り値が0に等しければキーが存在しない、1に等しければキーが存在する
    if (s_map.count(s)) if (s_map[s] != t) { 
      ok = false;
      break;
    }
    if (t_map.count(t)) if (t_map[t] != s) {
      ok = false;
      break;
    }
    s_map[s] = t; t_map[t] = s;
  }
  if (ok) puts("Yes");
  else puts("No");
}

/**
 * 嘘解法
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string S,T; cin>>S>>T;
  // int型のvectorを要素数26, 値0で初期化
  vector<int> c1(26,0), c2(26,0);
  for(int i = 0; i<S.length(); i++ ) c1[S[i]-'a']++;
  for(int i = 0; i<T.length(); i++ ) c2[T[i]-'a']++;
  sort(c1.begin(), c1.end());
  sort(c2.begin(), c2.end());
  if( c1 == c2 ) cout<<"Yes\n";
  else cout<<"No\n";
  return 0;
}
*/