#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;
    int output = 0;
    for(int i=1; i<=n; i++){
        int num = i;
        int sum = 0;
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        if(sum >= a && sum <= b){
            output += i;
        }
    }
    cout << output << '\n';
}