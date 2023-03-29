#include <iostream>
using namespace std;


class ConvertSecond {
		// 선언부
	private:
		int hour, minute, second; // 멤버변수
	public:
		ConvertSecond(); // 생성자
		void setData(); // 멤버함수
		int getResult(); // 멤버함수
	};

	// 구현부
	ConvertSecond::ConvertSecond() { hour = 0; minute = 0; second = 0; }// 생성자 초기화 
	void ConvertSecond::setData() {
		cout << "시(hour) 입력: ";
		cin >> hour;
		cout << "분(minute) 입력: ";
		cin >> minute;
		cout << "초(second) 입력: ";
		cin >> second;
	}
	int ConvertSecond::getResult() {
		return (hour * 60 * 60) + (minute * 60) + second; // 60 ** 2는 파이썬 제곱 연산자
	}


	int main() {

		ConvertSecond a;
		a.setData(); // 사용자에게 시, 분, 초 입력받아서 멤버변수에 넣음 */
		cout << "입력하신 시간은 총 " << a.getResult() << " 초 입니다." << endl;

		ConvertSecond b; // 이번에는 사용자 입력 안 받았으므로 결과는 0초 나옴
		cout << "기본 시간은 총 " << b.getResult() << " 초 입니다." << endl;

		return 0;
	}
