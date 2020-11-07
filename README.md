# Practice_C++
 
C++の勉強用のリポジトリです。

## モチベーション
+ 何かのラッパーであるPythonモジュールを使うことがたまにある。
  + そのとき、元のコードを見たら、C++だったりするので書かれていることを理解できるレベルになりたい。

### Macでc++を書く際のデファクトスタンダードはなんだろうか。
+ VS Codeでもいい？

### コンパイルどうやるの？
+ VS Code
+ C/C++ extension for VS Code
+ Code Runner
  + コードランナーで処理を止めるには？
     + Ctrl + Alt + Mを押せばよい。（あるいはターミナル上で右クリックで止める。）

### ターミナルでコンパイルするにはどうやるの？
Macだとターミナルで  
g++ -o output Sample1.cpp  
を実行すればいけた。ファイルの実行は  
./output  
でいけた。


### コードの意味をまとめておきたい。
+ return 0;で終わるのはなぜか。
  + main()関数の処理が正常に行われた際に返される結果として0が一般的なためとされている。
+ cout：標準出力（character outputの略）
+ main()：この記述から処理が行われる決まりになっている。そしてプログラムの本体となる。
+ iostream：画面出力系の機能がつまったファイルのことらしい。
  + コンパイラのプロプリセッサがコードの翻訳時に先んじて読み込む。
+ stdio:C++でもstdioを使用することができるが、プログラムでiostreamとstdioとを標準ストリームとして併用すると、問題が起こる場合があるらしい。標準入出力関連の関数、マクロと型宣言が含まれており、名称の由来は（おそらく）標準入出力を意味する「Standard I/O」の略である。(I/OはInput/Outputの略)
+ namespace std：coutはstd.coutと書かなければならないが、それが面倒なので先頭で名前空間というものを指定して、coutだけで済むようにしている。Pythonのnumpy as npみたいなものか。
+ void型とは「型がないことを示す型」を指す。単語としては空虚という意味だが。
+ アドレス演算子（&変数名）：変数の格納されているメモリのアドレスを知るために使う。
+ ポインタ：アドレスを格納する特殊な変数のこと。（直接メモリに関する処理を記述できるのがC言語の面白さ？）
+ typedef：型に独自の識別子をつけることができる。

### ルール
+ コンパイルが必要
+ 文の最後にセミコロンが必要
+ インデントはご自由に。（Pythonと違う。）
+ 文字は1文字だと「'」、文字列だと「"」を使う。
+ C言語は「型」に支配された言語。
+ デフォルト引数は右側から順に設定する。
+ グローバル変数とローカル変数で同じ名前を使うことができる。
+ ローカル変数にstaticをつけるとグローバル変数と同じような寿命で使える。
+ グローバル変数をいっぱい使うとメモリの無駄遣いにも繋がるので、new演算子やdelete演算子でメモリを解放しつつ、変数を使い回すという配慮が必要となる。
