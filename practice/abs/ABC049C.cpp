#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s;
int length;

int cmp_str (int i, string str){
    return s.compare(i, str.size(), str );
}

int main (){
    cin >> s;
    length = s.size();
    int index=0;

//  入力文字列の順序を逆にする
    reverse(s.begin(), s.end());

    string dream("maerd");
    string dreamer("remaerd");
    string erase("esare");
    string eraser("resare");


//  全ての文字列を読み終わるまで続ける
    while(index < length){
        if(cmp_str(index, dream) == 0){
            index +=5;
            continue;
        }else if(cmp_str(index, dreamer)  == 0){
            index +=7;
            continue;
        }else if(cmp_str(index, erase) == 0){
            index +=5;
            continue;
        }else if(cmp_str(index, eraser) == 0){
            index +=6;
            continue;
        }else{
            break;
        }
    }
    if(index == length){
        cout << "YES" << '\n';
    }else{
        cout << "NO" << '\n';
    }

    return 0;
}