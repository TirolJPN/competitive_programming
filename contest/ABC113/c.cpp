#include <iostream>
#include <algorithm>
#include <cstdlib>  // abs() for integer
#include <vector>
#include <ios>     // std::left, std::right
#include <iomanip> // std::setw(int), std::setfill(char)
using namespace std;



int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N,M;
    cin >> N >> M;

    int P, Y;

//    vector<pair<int, int> > pairs(M+1);
    vector<pair<int, int> > original_pairs(M+1);

    for(int i=1; i<M+1; i++){
        cin >> P >> Y;
        original_pairs[i] = make_pair(P, Y);
    }

//    sort(pairs.begin(), pairs.end());

    for(int i=1; i<M+1; i++){
        //　何番か求める
        int num = 0;
//        for(int tmp=1; tmp<M+1; tmp++){
//            if(pairs[tmp].first == original_pairs[i].first && pairs[tmp].second == original_pairs[i].second){
//                j=tmp;
//                break;
//            }
//        }

//        for(int k=1; k<=j; k++){
//            if(pairs[k].first == pairs[j].first){
//                num++;
//            }
//        }
        for(int j=1; j<M+1; j++){
            if(original_pairs[i].first == original_pairs[j].first && original_pairs[i].second > original_pairs[j].second){
                num++;
            }
        }

        cout  << setfill('0') << setw(6) << original_pairs[i].first << setfill('0') << setw(6) << num << '\n';
    }




}