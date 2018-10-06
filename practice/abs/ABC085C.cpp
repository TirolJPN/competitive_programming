#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,sum;
    cin >> n >> sum;

    bool ansflag = false;
    for(int x=0; x <=n; x++){
        for(int y=0; y<=(n - x); y++){
            if((10000 * x + 5000 * y + 1000 * (n - x - y)) == sum){
                cout << x << ' ' << y << ' ' << (n - x - y) << '\n';
                ansflag = true;
                break;
            }
        }
        if(ansflag) break;
    }
    if(!ansflag){
        cout << "-1 -1 -1\n";
    }
}
