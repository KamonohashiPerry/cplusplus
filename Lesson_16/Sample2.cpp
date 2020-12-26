#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "文字を続けて入力してください。\n";

    while(cin.get(ch)){ // 1文字ずつ読み込む
        cout.put(ch); // 1文字ずつ出力
    }

    return 0;
}