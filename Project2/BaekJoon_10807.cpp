// 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int v;
	cin >> v;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == v) {
			count++;
		}
	}
	cout << count;
}