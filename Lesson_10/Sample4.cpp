#include <iostream>
using namespace std;

int main()
{
    int num;
    int* pT;

    cout << "何人のテストの点数を入力しますか？\n";

    cin >> num; // キーボードから数値を入力

    pT = new int(num); // 配列要素を確保

    cout << "人数分の点数を入力してください。\n";

    for(int i=0; i<num; i++){
        cin >> pT[i]; // ポインタを使って点数を記録
    }

    for(int j=0; j<num; j++){
        cout << j+1 << "番目の人の点数は" << pT[j] << "です。\n";
    }

    delete[] pT;
    return 0;
}