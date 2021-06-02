/* Esta cabecera permite usar los objetos que encapsulan los descriptores stdout
y stdin: cout(<<) y cin(>>)*/
#include <iostream>

using namespace std;

int main()
{
    cout << "Hola mundo" << endl;
    return 0;
    
    int flag;
    cout << "Program is paused !\n" <<
        "Press Enter to continue\n";

    // pause the program until user input
    flag = getc(stdin);
}
