#include<iostream>

using namespace::std;

int main(int) {
  int D;
  cin >> D;
  if (D == 25) cout << "Christmas";
  else if(D == 24) cout << 'Christmas Eve';
  else if(D == 23) cout << 'Christmas Eve Eve';
  else if(D == 22) cout << 'Christmas Eve Eve Eve';
}