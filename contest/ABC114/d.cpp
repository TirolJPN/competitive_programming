#include <iostream>

using namespace std;

int N ,M;
int main(){
    cin >> N >> M;
    int D = M / N;
    for(int i=D; i>0; i--){
        if(M % i == 0){
            cout << i << endl;
            break;
        }
    }

    return 0;
}