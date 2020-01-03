#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int N;
  cin >> N;
 
  int answer = 0;
  int mx = 0;
 
  for (int i = 0; i < N; i++) {
    int p;
    cin >> p;
    answer += p;
    mx = max(mx, p);
  }
 
  cout << answer - (mx / 2) << endl;
 
}