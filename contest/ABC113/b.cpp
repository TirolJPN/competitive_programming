#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);



    int N;
    double T, A;
    cin >> N ;
    cin >> T >> A;
    double H[N+1];
    for(int i=1; i<=N; i++) {
        cin >> H[i];
    }
    double minimum =  100000000.0;
    int num = 0;
    for(int i=1; i<=N; i++){
        if(minimum > abs(T - 0.006 * H[i] - A)){
            num = i;
            minimum = abs(T - 0.006 * H[i] - A);
        }
    }

    cout << num << '\n';
}
