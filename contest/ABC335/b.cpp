#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
  int n;
  string result;
  cin >> n;

  for (int x = 0; x < n + 1; x++)
  {
    for (int y = 0; y < n + 1; y++)
    {
      for (int z = 0; z < n + 1; z++)
      {
        if (x + y + z <= n)
        {
          printf("%d %d %d\n", x, y, z);
        }
      }
    }
  }
}