main.cpp
#include <iostream>
#include "iu.h" //include "iu.h"�� �� ������ ���ڴٴ� �ǹ�
#include "gong.h"
using namespace std;
//using namespace iu //iu.h�� �ִ� ������ ���ڴٴ� �ǹ�
//using namespace gong.h 

int main() {
    /* 2�� Quiz #3
    cout << "iu�� �� ���� ���\n";
     cout << a << " " << b << " " << c << endl; //using namespace iu

     cout << gong::a << endl; //���� ���� ���� �纸, ���� �̸��� �Լ��� ������ ���� ���� using namespace�� �� �� �����Ƿ� gong:: ���־�� �Ѵ�. */

    cout << "iu�� �� ���� ���\n";
    cout << iu::aout << " " << iu::bout << " " << iu::cout << endl; //using namespace iu�� �ϸ� �� �ȴ�. cout�� �������̶� ���Ƽ�
    cout << gong::a << endl;

    return 0;

}