# include <iostream>
using namespace std;

int main()
{
    int res;

    cout << "成績を入力してください。（1〜5）\n";

    cin >> res;

    switch(res){
        case 1:
        case 2:
            cout << "もう少しがんばりましょう。\n";
            break;
        case 3:
        case 4:
            cout << "この調子でがんばりましょう。\n";
            break;
        case 5:
            cout << "たいへん優秀です。\n";
            break;
        default:
            cout << "1〜5までの成績を入力してください。\n";
    }
    return 0;
}