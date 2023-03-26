#include <iostream>
#include <string>
using namespace std;


int main() {
    string name, password, repassword;

    cout << "이름 입력: ";
    getline(cin, name); //endl 할 필요 없음. enter를 치니까
    cout << "암호 입력: ";
    getline(cin, password);
    cout << "다시 입력: ";
    getline(cin, repassword);
    
    if (password == repassword)
        cout << name << "님께서 로그인하셨습니다.";
    else
        cout << name << "님, 다시 입력하세요.";
    
    return 0;

}
