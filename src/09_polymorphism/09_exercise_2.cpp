#include <iostream>
using namespace std;

template <class T>
int binSearch(T arr[], int n, T key);

/*请实现折半查找，并按顺序输出被访问的元素下标*/
/*

template <class T>
int binSearch(T arr[], int n, T key) {
	int low = 0, high = n ;
	while (low < high) {
		int mid = (low + high) >> 1;
		cout<<mid<<endl;
		if (key < arr[mid]) {
			high = mid -1;
		} else if (arr[mid] < key) {
			low = mid + 1;
		} else {
			return mid;
		}
	}

	return -1;
}
*/

template <class T>
int binSearch(T arr[], int n, T key) {
	int low = 0, high = n - 1;
	while (low <= high) {
		int mid = (low + high) >> 1;
		cout<<mid<<endl;
		if (key < arr[mid]) {
			high = mid -1;
		} else if (arr[mid] < key) {
			low = mid + 1;
		} else {
			return mid;
		}
	}

	return -1;
}
int main()
{
       int n, m;
       int key1;
       double key2;
       cin >> n >> m >> key1 >> key2;
       int* arr_int = new int[n];
       double* arr_double = new double[m];
       for (int i = 0; i < n; ++i)
              cin >> arr_int[i];
       for (int i = 0; i < m; ++i)
              cin >> arr_double[i];
       binSearch(arr_int, n, key1);
//       cout<<endl;
       binSearch(arr_double, m, key2);
       return 0;
}
