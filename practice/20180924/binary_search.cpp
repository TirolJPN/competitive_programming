#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> vc;
    while(n--){
        int x;
        cin >> x;
        vc.push_back(x);
    }
    // 二分探索なので、最初にソートする
    sort(vc.begin(), vc.end());

    int x;
    cin >> x;
    if(binary_search(vc.begin(), vc.end(), x)){ //binary_searchは成功or失敗でtrueかfalseを返す
        cout << "I found " << x << '\n';
    }
    // lower_boundは指定された値"以上"の値が初めて現れた位置のイテレータを返す
    vector<int>::iterator lit = lower_bound(vc.begin(), vc.end(),x);
    // upper_boundは指定された値を"超える"値が初めて現れた位置のイテレータを返す
    vector<int>::iterator uit = upper_bound(vc.begin(), vc.end(),x);
    if(lit != vc.end() && lit != uit){
        cout << uit - lit << '\n';
    }

    return 0;
}