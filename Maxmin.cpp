#include <iostream>
using namespace std;

class Maxmin {
    double a, b, c;
public:
    Maxmin(double a, double b, double c) {
        this->a = a; this->b = b; this->c = c; /*생성자 완성*/
        
    }
    double getMax();
    double getMin();

};

/* 클래스 구현부 코딩: 멤버함수 두개, if문 사용x (삼항조건연산자 사용)*/
double Maxmin::getMax(){
    return (a > b) && (a > c) ? a : (b > a) && (b > c) ? b : c;
}
double Maxmin::getMin(){
    return (a < b) && (a < c) ? a : (b < a) && (b < c) ? b : c;
}

int main() {
    double a, b, c;
    while (true) {
        cout << "실수 세 개 입력: "; cin >> a >> b >> c;
        if (a + b + c == 0) break;
        Maxmin* p = new Maxmin(a, b, c); /* 동적 할당하는 한 줄*/
        cout << "최대값은 " << p->getMax() << "최소값은 " << p->getMin() << endl; /* cout 한 줄 */
        delete p;
    }

    cout << "bye!" << endl;
}
