#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
  string S, result;
  cin >> S;

  S.pop_back();
  result = S + '4';

  cout << result;
}