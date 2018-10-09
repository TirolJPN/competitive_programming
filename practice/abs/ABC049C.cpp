#include <iostream>

using namespace std;

string s;
int index = 0;
int lnegth;
bool flag  = false;

int main (){
    cin >> s;
    length = s.size();
    /*
     * 文字列の被りの可能性があるTに追加する文字列の組み合わせ
     * dream　dreamer erase eraser
     * dream(er) erase(r)
     */
    while(true){
        if(index == s.size()){
            flag = true;
            break;
        }
        // 次の探索対象が"dream"と等しければ
        if(s.compare(index, index+5, 'dream' ) == 0){
            index += 5;
        }
    }
}