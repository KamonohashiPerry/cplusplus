#include <iostream>
using namespace std;

// 構造体型Carの宣言
struct Car{
    int num;
    double gas;
};

// show関数の宣言
void show(Car* pC); // 構造体へのポインタを引数に持つ関数

int main()
{
    Car car1 = {0, 0.0};

    cout << "ナンバーを入力してください。\n";
    cin >> car1.num;

    cout << "ガソリン量を入力してください。\n";
    cin >> car1.gas;

    show(&car1); // 構造体car1のアドレスを返す

    return 0;
}

// show関数の定義
void show(Car* pC)
{
    cout << "車のナンバーは" << pC->num << "ガソリン量は" << pC->gas << "です。\n"; // -> はアロー演算子と呼ぶ。
}