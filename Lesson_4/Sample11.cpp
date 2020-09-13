# include <iostream>
using namespace std;

int main()
{
    int num1 = 5;
    int num2 = 4;
    double div;
    double div2;

    div = num1/num2;
    div2 = (double)num1/(double)num2;

    cout << "5/4は" << div << "です。\n";
    cout << "5/4は" << div2 << "です。\n";

    return 0;
}