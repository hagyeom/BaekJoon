// 9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã�� �� �ִ��� �� ��° �������� ���ϴ� ���α׷�
#include <iostream>
using namespace std;
int main() {
	int arr[9];
	int maxValue = 0, maxIndex = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (maxValue < arr[i]) {
			maxValue = arr[i];
			maxIndex = i;
		}
	}
	cout << maxValue << endl << maxIndex+1;
}