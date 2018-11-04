#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>  // abs() for integer
#include <vector>
#include <tuple>


using namespace std;


//　現在地を表す
int X=0;
int Y=0;
int T=0;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    /*
     N
    t1 x1 y1
    t2 x2 y2
    :
    tN xN yN

     N箇所回る必要がある
     まず、tN内に(xN, yN)に到着できるか？
        →ti (ti < tN)に(xN, yN)に到着できたとする
         (tN - ti)が2で割り切れるか？
     */

    //　目的地の数と各入力値の用意

    bool flag = true;
    int N;
    cin >> N;

    int t[N+1], x[N+1], y[N+1];
    for(int i=1; i<=N; i++){
        cin >> t[i] >> x[i] >> y[i];
    }

    for(int i=1; i<=N; i++){
        if(abs(X - x[i]) + abs(Y - y[i]) > (t[i] - T)){
            flag = false;
            break;
        }else{
            T += abs(X - x[i]) + abs(Y - y[i]);

            if((t[i] - T) % 2 == 0){
                X = x[i];
                Y = y[i];
                T = t[i];
            }else{
                flag = false;
                break;
            }
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
