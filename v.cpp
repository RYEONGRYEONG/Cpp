#include <iostream>
#pragma warning (disable : 4996)
using namespace std;

/* 코드는 맞는데 시간초과가 계속뜸
while문을 for문으로 바꿔보고, cin, cout을 scanf printf로 바꿔봐도 시간초과 뜸
그렇다면 반복문으로 인한 시간초과. 반복문을 사용하지 않고 오로지 수학수식만으로 문제 해결해야 함
*/

int main() {
	int A, B, V;
	int day = 0;


	scanf("%d %d %d", &A, &B, &V);
	int diff = A - B;

	// 예제 2 1 5 , 5 1 6 , 6 3 6
	if ((V - B) % (A - B) != 0) {
		day = (V - B) / (A - B) + 1;
		if (A >= V) {
			day = 1;
		}
	} 

	else if ((V - B) % (A - B) == 0) {
		day = (V - B) / (A - B);
	}

	
	printf("%d", day);

	return 0;
}
