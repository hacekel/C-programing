#include<iostream>

using namespace std;

void main()
{
	cout << "輸入三角形的層數" << endl;
	int n = 0;
	cin >> n;
	for (int i = n; i >= 1; i--)
	{

		for (int j = 0 ; j <= i-2; j++)
		{

			cout << " ";
		}
		for (int j = n; j >= i; j--)
		{
			cout << "*";
		}
		cout << endl ;

	}
	system("pause");
}
