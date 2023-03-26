main.cpp
#include <iostream>
#include "iu.h" //include "iu.h"는 이 파일을 쓰겠다는 의미
#include "gong.h"
using namespace std;
//using namespace iu; //iu.h에 있는 변수를 쓰겠다는 의미
using namespace gong; 

int main() {
    /* 2장 Quiz #3
    cout << "iu의 세 변수 출력\n";
     cout << a << " " << b << " " << c << endl; //using namespace iu

     cout << gong::a << endl; //변수 작은 쪽이 양보, 같은 이름의 함수와 변수가 있을 때는 using namespace를 쓸 수 없으므로 gong:: 해주어야 한다. */

    cout << "iu의 세 변수 출력\n";
    cout << iu::aout << " " << iu::bout << " " << iu::cout << endl; //using namespace iu를 하면 안 된다. cout과 변수명이랑 같아서
    cout << a << endl;

    return 0;

}
