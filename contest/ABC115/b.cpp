#include<iostream>

using namespace::std;

int main(int) {
  int N;
  cin >> N;

  int sum = 0, mx = 0;
  for (int i=0; i<N; i++){
    int p;
    cin >> p;
    sum += p;
    mx = max(mx, p);
  }
  cout << sum - (mx / 2);
}