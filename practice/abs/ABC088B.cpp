#include<iostream>
#include<algorithm>

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

using namespace std;

int main (){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a + SIZE_OF_ARRAY(a),  greater<int>());
    int output=0;
    int index = 0;
    while(index < n){
        if(index % 2 == 0){
            output += a[index];
        }else{
            output -= a[index];
        }
        index++;
    }
    cout << output << '\n';
    return 0;
}