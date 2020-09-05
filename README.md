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
     + Ctrl + Alt + Mを押せばよい。

### ターミナルでコンパイルするにはどうやるの？
Macだとターミナルで  
g++ -o output Sample1.cpp  
を実行すればいけた。ファイルの実行は  
./output  
でいけた。


### コードの意味をまとめておきたい。
+ cout：標準出力（character outputの略）
+ main()：この記述から処理が行われる決まりになっている。そしてプログラムの本体となる。
+ iostream：画面出力系の機能がつまったファイルのことらしい。
  + コンパイラのプロプリセッサがコードの翻訳時に先んじて読み込む。
+ namespace std：coutはstd.coutと書かなければならないが、それが面倒なので先頭で名前空間というものを指定して、coutだけで済むようにしている。Pythonのnumpy as npみたいなものか。

### ルール
+ コンパイルが必要
+ 文の最後にセミコロンが必要
+ インデントはご自由に。（Pythonと違う。）
+ 文字は1文字だと「'」、文字列だと「"」を使う。
