#include <iostream>
#include <climits>
using namespace std;

int main (){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int output = INT_MAX;
    for (int i = 0; i < n; i++){
        int a=0;
        int count = 0;
        cin >> a;
        while((a%2) == 0){
            a /= 2;
            count ++;
        }
        if(count < output ) output = count;
    }
    cout << output << '\n';
}