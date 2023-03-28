#include <iostream>
#include <string>
using namespace std;

int main() {
	string data;
	int count = 1;
	getline(cin, data);

	int len = data.length();

	for (int i = 0; i < data.length(); i++) {
		if (data[i] == ' ')
			count++;
	}

	if (data[0] == ' ') count--;
	if (data[data.length() -1 ] == ' ') count--;
		
	cout << count;

	return 0;
}
