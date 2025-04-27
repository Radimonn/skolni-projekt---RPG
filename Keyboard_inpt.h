#include <Windows.h>
using namespace std;

void inputcheck() {

    for (int i=0; i< 256; i++) {

        if(GetAsyncKeyState(i) & 0b1) {

            std::cout << (char)i;


        }

    }


}
