#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int s;
    cin >> s;

    int output = 0;
    while (s > 0){
        if(s % 10 == 1){
            output++;
        }
        s /= 10;

    }
    cout << output << '\n';
}