// N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷�
#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); // ����� �ӵ� ���̱�
	int n, min = 1000000, max = -1000000;
	cin >> n;
	int* arr = new int[n]; // �������� �迭 �Ҵ�
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (min > arr[i])min = arr[i];
		if (max < arr[i])max = arr[i];
	}
	cout << min << " " << max;
	return 0;
}