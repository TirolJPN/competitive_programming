#include <iostream>
#include <vector>
using 
namespace std;
int main(){
    // cinとcoutの結びつきを解消する
    cin.tie(0);
    // stdioとの同期を解除
    ios::sync_with_stdio(false);

    // 整数型変数
    int x, n;
    // C++の配列
    int array[10];
    // 可変長配列 vector
    vector<int> vc;

    // iostreamは入出力の時間が遅いため、そのままの使用は非推奨
    cin >> x;
    cout << x * x * x << "\n";
    
    for (int i = 0; i < 10; i++){
        array[i] = i * i;
        cout << array[i] << "\n";
    }

    cin >> n;
    while(n--){
        int x;
        cin >> x;
        vc.push_back(x);
    }

    n = vc.size() / 2;
    if(vc[n] == vc.at(n))
        cout << n << '\n';
}