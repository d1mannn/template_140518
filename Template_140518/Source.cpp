#include <iostream>
#include <ctime>
#include "Vector.h"
#include "Vector.cpp"
using namespace std;

//search min ele in an array
//template<typename T> //после него должна идти функиц€ где будет использоватьс€ данынй шаблон

//T min_array(T*a, int size)
//{
//	T min = a[0];
//
//	for (int i = 0; i < size; i++)
//		if (min > a[i])
//			min = a[i];
//	return min;
//}
//
//template<typename type>
//void print_arr(type * a, int &length)
//{
//	for (int i = 0; i < length; i++)
//		cout << a[i] << endl;
//}
//
//template<typename T1, typename T2>
//auto calc(T1 a, T2 b)->decltype(a * b)
//{
//	return a * b;
//}
//
//template<typename type>
//class arr
//{
//public:
//	type * els;
//	int n;
//};
//

int main()
{	
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a[3] = { 6, 2, -1 };
	double b[4] = { 1.2, -5.4, 12, 3.4 };
	Vector<int>arr(5);
	cin >> arr;
	cout << arr;
	/*cout << min_array(a, 3) << endl;
	cout << min_array(b, 4) << endl;
	cout << "¬ведите 0 дл€ int\nили 1 дл€ double\n---->  ";
	int typ;
	cin >> typ;
	switch (typ)
	{
		case 0:
		{	
			int length = 4 + rand() % 4;
			int *arr1 = new int[length];
			for (int i = 0; i < length; i++)
				arr1[i] = i;
			print_arr(arr1, length);
			cout << calc(arr1[2], arr1[1]) << endl;
		} break;

		case 1:
		{
			int length = 4 + rand() % 4;
			double *arr1 = new double[length];
			for (int i = 0; i < length; i++)
				arr1[i] = i + 0.5;
			print_arr(arr1, length);
		} break;
	}*/
	system("pause");
	return 0;
}