#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>  // abs() for integer
#include <vector>
#include <tuple>

using namespace std;



int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    if(N<357){
        cout << 0;
        return 0;
    }
    int ans=0;
    int i=357;
    while(i <= N){
        // iについて調べる
        int tmp =i;
        bool tmpf = true;
        int c3=0,c5=0,c7=0;
        while(tmp != 0){
            int index = tmp % 10;
            tmp /= 10;
            if(index == 3){
                c3++;
                continue;
            }else if(index == 5){
                c5++;
                continue;
            }else if(index == 7){
                c7++;
                continue;
            }else{
                tmpf = false;
                break;
            }
        }
        if(tmpf && c3>0 && c5 > 0 && c7>0){
            cout << i << endl;
            ans++;
        }
        if(((i/10) / (i / (i/10))) < 3){
            i = 3 * (i / (i/10)) * 10;
        }else if(((i/10) / (i / (i/10))) == 4){
            i = 5 * (i / (i/10)) * 10;
        }else if(((i/10) / (i / (i/10))) == 6){
            i = 7 * (i / (i/10)) * 10;
        }else if(((i/10) / (i / (i/10))) == 8 || ((i/10) / (i / (i/10))) == 9){
            i = 3 * (i / (i/10)) * 100;
        }else{
            i++;
        }
    }
    cout << ans;
    return 0;
}
