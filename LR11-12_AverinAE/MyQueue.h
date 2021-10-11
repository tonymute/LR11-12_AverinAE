#include <iostream>
#include "Date.h"

using namespace std;

template <class T> class queue {
private:
	int size;
	int N = 0;
	T* data;
public:
	queue(int n) {
		data = new T[n];
		size = n;
	}
	~queue() {
		delete[] data;
	}
	queue& operator=(const queue& ochered) {

	}
	void Show() {
		cout << "���������� ������� -> ";
		for (int i = 0; i < N; i++) {
			cout << data[i] << " ";
		}
		cout << endl;
	}
	void operator +(T a) {
		if (N < size) {
			if (N > 0)
				for (int i = N; i > 0; i--) {
					data[i] = data[i - 1];
				}
			data[0] = a;
			N++;
			cout << "\n������� " << a << " �������� � �������" << endl;
		}
		else {
			cout << "\n������� " << a << " �� ��������, �.�. ������� ����������." << endl;
		}
		Show();
	}
	void operator -() {
		if (N != 0) {
			//	data[N - 1] = NULL;
			N--;
			cout << "\n������� ������ �� �������" << endl;
		}
		else {
			cout << "\n������� �� ������, �.�. ������� �����." << endl;
		}
		Show();
	}
	void operator --() {
		if (N == 0) {
			cout << "\n������� ������" << endl;
			Show();
		}
		else {
			cout << "\n������� �� ������" << endl;
		}
	}
};