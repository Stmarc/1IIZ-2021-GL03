#include <iostream>

using namespace std;

int re(int arr[], int start, int end)
{
	if (start < end)
	{
		swap(arr[start], arr[end]);

		

		re(arr, start + 1, end - 1);



	}
	return 0;

}


int main() 
{
	const int n = 4;
	int arr[n] = { 1,2,3,4 };



	re(arr, 0, n-1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}


	return 0;
}