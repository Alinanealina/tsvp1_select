#include <iostream>
using namespace std;
const int N = 8;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A[N], i, j, k, obm, M = 0, C = 0;
	cout << " " << N << " чисел: ";
	for (i = 0; i < N; i++)
		cin >> A[i];
	cout << "\n Исходный массив: ";
	for (i = 0; i < N; i++)
		cout << A[i] << " ";

	for (i = 0; i < N - 1; i++)
	{
		k = i;
		for (j = i + 1; j < N; j++)
		{
			C++;
			if (A[j] < A[k])
				k = j;
		}
		if (k != i)
		{
			M += 3;
			obm = A[i];
			A[i] = A[k];
			A[k] = obm;
		}
	}

	cout << "\n Отсортированный SelectSort массив: ";
	for (i = 0; i < N; i++)
		cout << A[i] << " ";
	cout << "\n________________________________\n Количество операций:\n -сравнения " << C << "\n -присваивания " << M << "\n -их сумма " << C + M << endl;
	return 0;
}