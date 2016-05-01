#include<iostream>
using namespace std;
void main()
{
	char name1[700] = {};
	cout << "請輸入第一位同學的名子" << endl;
	cin >> name1;
	int grade1 = 0;
	cout << "請輸入第一位同學的成績" << endl;
	cin >> grade1;
	system("pause");

	char name2[700] = {};
	cout << "請輸入第二位同學的名子" << endl;
	cin >> name2;
	int grade2 = 0;
	cout << "請輸入第二位同學的成績" << endl;
	cin >> grade2;
	system("pause");

	char name3[700] = {};
	cout << "請輸入第三位同學的名子" << endl;
	cin >> name3;
	int grade3 = 0;
	cout << "請輸入第三位同學的成績" << endl;
	cin >> grade3;
	system("pause");





	
	switch (grade1>=60)
	{
	case 1: cout<< name1<< "及格了" << endl;
	break;
	default: cout<< name1<<"不及格"<< endl;
	break;

	}
	system("pause");

	switch (grade2 >= 60)
	{
	case 1: cout << name2 << "及格了" << endl;
	break;
	default: cout << name2 << "不及格" << endl;
	break;
	}
	system("pause");

	switch (grade3 >= 60)
	{
	case 1: cout << name3 << "及格了" << endl;
	break;
	default: cout << name3 << "不及格" << endl;
	break;

	}
	system("pause");
	int a = 0;
	int b = 0;
	int c = 0;
	if (grade1 >= 60)
	{
		a = 1;
	}
	if (grade2 >= 60)
	{
		b = 1;
	}
	if (grade1 >= 60)
	{
		c = 1;
	}
	cout << a + b + c << "人及格" << endl;
	cout << 3 - a - b - c << "人不及格" << endl;
	system("pause");
}

