#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>  // abs() for integer
#include <vector>
#include <tuple>

using namespace std;

long long N, X[1009], Y[1009], H[1009];
vector <tuple<long long, long long, long long>>vec;


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
//    ダメだったやつ
//    int n;
//    cin >> n;
//    int x_c[n], y_c[n], height[n];
//
//    for(int i=0; i<n; i++){
//        cin >> x_c[i] >> y_c[i] >> height[i];
//    }
//
//    int c_x, c_y, trueheight = 100000;
//    bool flag = true;
//    for(int x=0; x<=100; x++){
//        for(int y=0; y<=100; y++){
//            int tmp_1;
//            int tmp_2;
//            for(int i=0; i<n-1; i++){
//                tmp_1 = height[i] + abs(x_c[i] - x) + abs(y_c[i] - y);
//                tmp_2 = height[i+1] + abs(x_c[i+1] - x) + abs(y_c[i+1] - y);
//                if(tmp_1 != tmp_2) {
//                    break;
//                }
//            }
//            if(trueheight > tmp_1){
//                c_x = x;
//                c_y = y;
//                trueheight = tmp_1;
//            }
//        }
//    }
//    cout << c_x << ' ' << c_y << ' ' << trueheight << '\n';

    cin >> N;
    tuple<long long, long long, long long>G = make_tuple(-1, -1, -1);

    for (int i=1; i<=N; i++){
        cin >> X[i] >> Y[i] >> H[i];
        if(H[i] >= 1) G = make_tuple(X[i], Y[i], H[i]);
    }
    for(int i=0; i<=100; i++){
        for(int j=0; j<=100; j++) {
            long long V = get<2>(G) + abs(get<0>(G) - i) + abs(get<1>(G) - j);
            V = max(V, 1LL);
            bool flag = true;
            for (int k = 1; k <= N; k++) {
                long long VV = V - abs(X[k] - i) - abs(Y[k] - j);
                VV = max(VV, 0LL);
                if (H[k] != VV) flag = false;
            }
            if(flag == true)
            vec.push_back(make_tuple(i, j, V));
        }
    }
    if(vec.size() == 1){
        cout << get<0>(vec[0]) << " " << get<1>(vec[0]) << " " << get<2>(vec[0]) << endl;
    }
    return 0;
}