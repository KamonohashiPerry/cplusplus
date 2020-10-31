#include <iostream>
using namespace std;

// func関数の宣言
void func();

int a = 0; // grobal変数

// main関数
int main()
{
    for(int i=0; i<5; i++)
        func();

    return 0;
}

// func関数の定義
void func()
{
    int b = 0; // local変数
    static int c = 0; // staticをつけたlocal変数

    cout << "変数aは" << a << "変数bは" << b << "変数cは" << c <<  "です。\n";
    a++;
    b++;
    c++;
}
