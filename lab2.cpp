// fib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//int fib_rek(int n) {
//	if (n == 0) return 0;
//	if (n == 1) return 1;
//	else return fib_rek(n - 1) + fib_rek(n - 2);
//
//}
//
//
//
//int fib_dyn(int n) {
//	int tab[100];
//	tab[0] = 0;
//	tab[1] = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		tab[i] = tab[i - 1] + tab[i - 2];
//
//
//	}
//	return tab[n];
//}



//float zadanie2(int a, int b) {
//	float tab[100][100];
//	for (int i = 0; i < 100; i++)
//	{
//
//		tab[i][0] = 0;
//
//	}
//
//	for (int i = 0 ; i < 100; i++)
//	{
//
//		tab[0][i] = 1;
//
//	}
//
//	for (int i = 1; i < 100; i++)
//	{
//
//		for (int j = 1; j < 100; j++)
//		{
//			tab[i][j] = (tab[i - 1][j] + tab[i][j - 1]) / 2;
//
//
//
//		}
//		
//
//	}
//	return tab[a][b];
//	
//
//}


float zadani3(int n) {

	int tab[100];
	tab[0] = 1;
	tab[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		tab[i] = 2*tab[i - 1] + tab[i - 2];
	
	
	}
	return tab[n];
}



int main()
{
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << "Fib rekur i= " << i << " = " << fib_rek(i) << endl;
	//	cout << "Fib dyn i= " << i << " = " << fib_dyn(i) << endl;
	//}



	//cout << zadanie2(2, 1);

	cout << zadani3(2);
}

