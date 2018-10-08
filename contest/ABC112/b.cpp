#include <iostream>
#include <climits>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, t;
    cin >> n >> t;

    int output =  INT_MAX;
    for(int i=0; i<n; i++){
        int cost, time;
        cin >> cost >> time;
        if(time <= t)
        {
            if(cost < output){
                output = cost;
             }
        }
    }
    if(output == INT_MAX){
        cout << "TLE\n";
    }else{
        cout << output;
    }

}
