#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::left, ios::adjustfield); // 左よせで出力
    for (int i=0; i<=5; i++){
        cout.width(5);
        cout.fill('-');
        cout << i;
    }
    cout << '\n';
    cout.unsetf(ios::left); // 左よせを解除
    cout.setf(ios::right, ios::adjustfield); // 右寄せで出力
    for (int j=0; j<=5; j++){
        cout.width(5);
        cout.fill('-');
        cout << j;
    }
    cout << '\n';

    return 0;
}