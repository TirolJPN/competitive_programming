#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> vc;
    while(n--){
        int x;
        cin >> x;
        vc.push_back(x);
    }
    sort(vc.begin(), vc.end());
    vc.erase(std::unique(vc.begin(), vc.end()), vc.end());
    cout << vc.size() << '\n';
    return 0;
}