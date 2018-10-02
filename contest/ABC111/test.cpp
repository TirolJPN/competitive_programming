#include <iostream>
#include <map>
#define create_tmp_num(a, b) a * 10 + b

using namespace std;
int main(void){
    cin.tie(0);
    iostream::sync_with_stdio(false);

    int n;
    cin >> n;
    int v[n];
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    map<int, int> mp1, mp2;
    int max1=0, max2=0, index1, index2;

    int output = 0;

    for(int i=0; i<n/2; i+=2){
        map<int, int>::iterator itr = mp1.find(v[i]);
        // みつからなかったら　
        if(itr == mp1.end()){
            mp1[v[i]] = 1;
        }else{
            // 見つかった数をカウントする
            mp1[v[i]] = mp1[v[i]] + 1;
        }

        itr = mp2.find(v[i+1]);
                // みつからなかったら　
        if(itr == mp2.end()){
            mp2[v[i+1]] = 1;
        }else{
            // 見つかった数をカウントする
            mp2[v[i+1]] = mp1[v[i+1]] + 1;
        }
    }
    for(map<int, int>::iterator it = mp1.begin(); it!=mp1.end(); it++ ) {
      if( max1 < it->second ){
          max1 = it->second;
          index1 = it->first;
      }
    }

    for(map<int, int>::iterator it = mp2.begin(); it!=mp2.end(); it++ ) {
      if( max2 < it->second ){
          max2 = it->second;
          index2 = it->first;
      }
    }
    cout << max1<< ' '<< max2 << '\n';
    if(index1 != index2){
        if(max1==n/2 && max2!=n/2){
            output = n - max2;
        }else if(max1!=n/2 && max2==n/2){
            output = n - max1;
        }else{
            output = n - max1 - max2;            
        }
    }else{
        if(max1 < max2){
            // output = max1;
            int tmp1 = 0;
            int tmpindex1 = 0;
                for(map<int, int>::iterator it = mp1.begin(); it!=mp1.end(); it++ ) {
                    if( tmp1 < it->second  && it->first!=index1){
                        tmp1= it->second;
                        tmpindex1 = it->first;
                    }
                }
            output = n/2 - tmp1;
        }else if(max1 > max2){
            // output = max2;
            int tmp1 = 0;
            int tmpindex1 = 0;
                for(map<int, int>::iterator it = mp2.begin(); it!=mp2.end(); it++ ) {
                    if( tmp1 < it->second  && it->first!=index1){
                        tmp1= it->second;
                        tmpindex1 = it->first;
                    }
                }
            output = n/2 - tmp1;
        }else{
            output = n/2;
        }
    }

    cout << output << '\n';
    return 0;
}