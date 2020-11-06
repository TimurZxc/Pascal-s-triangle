// test.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

double a(int N, int K)
{
	double Sum = 1;
	for (int i = 1; i <= K; i++) {
		Sum *= (N - i + 1) / float(i);
	}
	return Sum;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++)
			cout << a(i, j) << " ";
		cout << endl;
	}


	return 0;
}

