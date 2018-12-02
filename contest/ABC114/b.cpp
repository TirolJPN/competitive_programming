#include <iostream>
#include <climits>
#include <cmath>
#include <cstdlib>  // abs() for integer
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    int min = 60000;
    for(int i=0; i<(int)s.size() - 2; i++){
        int tmp;
        tmp = (s[i]-'0') * 100 + (s[i+1]-'0')*10 + (s[i+2]-'0');
        if(min > abs(tmp - 753)){
            min = abs(tmp - 753);
        }
    }
    cout << min;
}
