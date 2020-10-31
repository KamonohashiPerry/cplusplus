#include <iostream>
using namespace std;

// func関数の宣言
void func();

int a = 0; // grobal変数

// main関数
int main()
{
    int b = 1; // local変数

    cout << "main関数では変数aとbが使えます。\n";
    cout << "変数aの値は" << a << "です。\n";
    cout << "変数bの値は" << b << "です。\n";
    
    func();

    return 0;
}

// func関数の定義
void func()
{
    int c = 2; // local変数

    cout << "func関数では変数ではaとcが使えます。\n";
    cout << "変数aの値は" << a << "です。\n";
    cout << "変数cの値は" << c << "です。\n";   
}