// N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램
#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); // 입출력 속도 높이기
	int n, min = 1000000, max = -1000000;
	cin >> n;
	int* arr = new int[n]; // 동적으로 배열 할당
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (min > arr[i])min = arr[i];
		if (max < arr[i])max = arr[i];
	}
	cout << min << " " << max;
	return 0;
}