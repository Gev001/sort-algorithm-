#include"Header.h"

int main()
{
	int x[] = { 1,3,5,2,0,123,-2 };
	int y[] = { 0,-123,4,45,1 };
	int n = sizeof(x) / sizeof(int);
	int n1 = sizeof(y) / sizeof(int);
	quick_sort(x, 0, n);
	cout << "quick sort: ";
	for (int i = 0; i < n; ++i)
		cout << x[i] << " ";


	cout << "\ninsert sort ";
	insert_sort(y, n1);
	for (int i = 0; i < n1; ++i)
		cout << y[i] << " ";
	system("pause");
}


