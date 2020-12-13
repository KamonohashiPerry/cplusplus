#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    vector<int> vt; // ベクタを利用

    cout << "いくつ整数データを入力しますか？";
    cin >> num;

    for(int i=0; i<num; i++){
        int data;
        cout << "整数を入力してください。\n";
        cin >> data;
        vt.push_back(data); // ベクタの末尾に追加
    }

    cout << "表示します。\n";
    vector<int>::iterator it = vt.begin(); // 先頭のデータを知る
    while(it != vt.end()){ // 末尾のデータを知る
        cout << *it;
        cout << "-";
        it++;
    }
    cout << "\n";
}