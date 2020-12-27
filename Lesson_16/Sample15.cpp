#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    // 入力した文字列の個数を調べる
    if(argc != 2){
        cout << "パラメータの数が違います。\n";
        return 1;
    }

    // 入力した2番目の文字列を指定してファイルをオープン
    ifstream fin(argv[1]);
    if(!fin){
        cout << "ファイルをオープンできませんでした。\n";
        return 1;
    }

    char ch;
    // ファイルから1文字読み込む
    fin.get(ch);

    // ファイルの終わりに達するまで繰り返し
    while(!fin.eof()){
        // 画面に1文字出力
        cout.put(ch);
        // 次の文字を読み込む
        fin.get(ch);
    }

    fin.close();

    return 0;
}