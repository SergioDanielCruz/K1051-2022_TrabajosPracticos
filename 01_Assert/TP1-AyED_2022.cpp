#include <string>
#include <cassert>
#include <iostream>

int main()
{
    //Booleanos
    assert(true);
    assert(not false);

    //Caracteres
    assert('a' != 'b');
    assert('d' + 'q' == 0xD5);
    //std::cout << char(213);
    //assert('q' + 'd' == '♪');
    //printf("%c",213);
    //assert('d' + 'q' == 'Õ');
    //std::cout >> '213';
    float a = 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1;
    assert(a == 1);
    std::cout << a << "\n";

    

    system("pause");
    return 0;
}