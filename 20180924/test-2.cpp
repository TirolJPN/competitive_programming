#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    // map:連想配列
    map<char, int> mp;

    // string:文字列型
    string str;

    

    mp['a'] = 1;
    mp['b'] = 2;
    cout << mp['a'] << ' ' << mp['b'] << '\n';

    mp.insert(map<char, int>::value_type('c', 3));
    if(mp.find('c') != mp.end())
        cout << mp['c'] << '\n';

    str = "this is a string";
    str[2] = 'a';
    str[3] = 't';
    if(str.length() >= 5)
        cout << str << '\n';
    
    if(str.find("is") != string::npos)
        cout << str.find("is") << '\n';

    return 0;
}