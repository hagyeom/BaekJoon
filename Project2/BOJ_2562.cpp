// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램
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