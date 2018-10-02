#include <iostream>
#define create_tmp_num(a, b) a * 10 + b

using namespace std;
int main(void){
    cin.tie(0);
    iostream::sync_with_stdio(false);

    int input[3];
    cin >> input[0] >> input[1] >> input[2];

    int max=0;
    int index;
    for(int i=0; i <= 2; i++){
        if(max < create_tmp_num(input[i], input[(i+1)  % 3])){
         max = create_tmp_num(input[i], input[(i+1)  % 3]);
         index = (i + 2) % 3;
        }
        if(max < create_tmp_num(input[i], input[(i+2)  % 3])){
         max = create_tmp_num(input[i], input[(i+2)  % 3]);
         index = (i + 1) % 3;
        }
    }
    cout << max + input[index] << '\n';
    return 0;
}