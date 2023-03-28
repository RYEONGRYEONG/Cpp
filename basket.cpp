// 10811: 바구니 뒤집기

/* 문제부터 이해하는 게 조금 어려웠음, 문제를 이해하기 어려울 땐 예제로 이해!
  N, M 입력 받음
  ex) 5개의 바구니를 가지고 있고 왼쪽부터 1번~5번, 두번째줄부터 총 4개의 줄 -> 4번 바꾼다는 뜻
  1 2 3 4 5

1 2           2 1 3 4 5
3 4           2 1 4 3 5
1 4           3 4 1 2 5
2 2           3 4 1 2 5
*/

#include <iostream>
using namespace std;

int main() {
	int N, M, a, z;
	int arr[101] = { 0 };

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}

	for (int i = 0; i < M; i++) {
		cin >> a >> z;
		while (a < z) {
			int temp;
			temp = arr[a];
			arr[a] = arr[z];
			arr[z] = temp;

			a++;
			z--;
		}

	}
	return 0;
}
