#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int main(void) {
  cin.tie(0);
  iostream::sync_with_stdio(false);

  int N, M, X, Y;
  cin >> N >> M >> X >> Y;

  vector<int> X_N, Y_M;

  while(N--) {
		int x;
		cin >> x;
		X_N.push_back(x);
	}

  while(M--){
    int y;
    cin >> y;
    Y_M.push_back(y);
  }

  vector<int>::iterator iter = max_element(X_N.begin(), X_N.end());
  size_t X_INDEX = distance(X_N.begin(), iter);
  int X_MAX = X_N[X_INDEX];

  iter = min_element(Y_M.begin(), Y_M.end());
  size_t Y_INDEX = distance(Y_M.begin(), iter);
  int Y_MIN = Y_M[Y_INDEX];

  if ( X_MAX < Y_MIN && ( X < Y_MIN && Y_MIN <= Y ) ) { 
    printf("No War");
  } else {
    printf("War");
  }
}