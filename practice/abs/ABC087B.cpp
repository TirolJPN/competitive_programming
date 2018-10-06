#include <iostream>
using namespace std;

int main (){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a,b,c,x;
    cin >> a >> b >> c >> x;
    int output = 0;
    for(int i=0; i<=a; i++){
        for(int j=0; j<=b; j++) {
            for (int k = 0; k <= c; k++) {
                if ((500 * i + 100 * j + k * 50) == x) {
                    output++;
                }
            }
        }
    }
    cout << output << '\n';
}