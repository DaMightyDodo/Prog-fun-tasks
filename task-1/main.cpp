﻿#include <iostream>
#include <string>

int main() {
    std::string asciiArt = R"(
              _______
         ..-'`       ````---.
       .'          ___ .'````.'SS'.
      /        ..-SS####'.  /SSHH##'.
     |       .'SSSHHHH##|/#/#HH#H####'.
    /      .'SSHHHHH####/||#/: \SHH#####\
   /      /SSHHHHH#####/!||;`___|SSHH###\
-..__    /SSSHHH######.         \SSSHH###\
`.'-.''--._SHHH#####.'           '.SH####/
  '. ``'-  '/SH####`/_             `|H##/
  | '.     /SSHH###|`'==.       .=='/\H|
  |   `'-.|SHHHH##/\__\/        /\//|~|/
  |    |S#|/HHH##/             |``  |
  |    \H' |H#.'`              \    |
  |        ''`|               -     /
  |          /H\          .----    /
  |         |H#/'.           `    /
  |          \| | '..            /
  |    ^~DLF   /|    ''..______.'
   \          //\__    _..-. | 
    \         ||   ````     \ |_
     \    _.-|               \| |_
     _\_.-'   `'''''-.        |   `--.
 ''``    \            `''-;    \ /   |
          \      .-'|     ````.' ----
          |    .'  `--'''''-.. |/
          |  .'               \|
          |.'
)";
    //This is Link from the Legend of Zelda!!
    std::cout << asciiArt << std::endl;

    return 0;
}