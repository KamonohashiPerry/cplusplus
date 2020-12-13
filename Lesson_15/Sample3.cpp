#include <iostream>
#include <cstring>
using namespace std;

// Carクラスの宣言
class Car{
    private:
        int num;
        double gas;
        char* pName;
    public:
        Car(const char* pN , int n, double g);
        ~Car();
        Car(const Car& c); // コピーコンストラクタの宣言
        Car& operator=(const Car& c); // 代入演算子の宣言
};

// Carクラスメンバ関数の定義
Car::Car(const char* pN , int n, double g)
{
    pName = new char[strlen(pN) + 1]; // コンストラクタ内で動的にメモリを確保
    strcpy(pName, pN);
    num = n;
    gas = g;
    cout << pName << "を作成しました。\n";
}
Car::~Car()
{
    cout << pName << "を破棄します。\n";
    delete[] pName; // デストラクタ内でメモリを解放
}
Car::Car(const Car& c) // コピーコンストラクタ
{
    cout << c.pName << "で初期化します。\n";
    pName = new char[strlen(c.pName) + strlen("のコピー1") + 1];
    strcpy(pName, c.pName);
    strcat(pName, "のコピー1");
    num = c.num;
    gas = c.gas;
}
Car& Car::operator=(const Car& c) // 代入演算子のオーバーロード
{
    cout << pName << "に" << c.pName << "を代入します。\n";
    if(this != &c){
        delete[] pName;
        pName = new char[strlen(c.pName) + strlen("のコピー2") + 1];
        strcpy(pName, c.pName);
        strcat(pName, "のコピー2");
        num = c.num;
        gas = c.gas;
    }
    return *this;
}

int main()
{
    Car mycar("mucar", 1234, 25.5);

    Car car1 = mycar;

    Car car2("car2", 0, 0);
    car2 = mycar;

    return 0;
}