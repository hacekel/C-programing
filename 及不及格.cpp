#include<iostream>
using namespace std;
void main()
{
	char name1[700] = {};
	cout << "�п�J�Ĥ@��P�Ǫ��W�l" << endl;
	cin >> name1;
	int grade1 = 0;
	cout << "�п�J�Ĥ@��P�Ǫ����Z" << endl;
	cin >> grade1;
	system("pause");

	char name2[700] = {};
	cout << "�п�J�ĤG��P�Ǫ��W�l" << endl;
	cin >> name2;
	int grade2 = 0;
	cout << "�п�J�ĤG��P�Ǫ����Z" << endl;
	cin >> grade2;
	system("pause");

	char name3[700] = {};
	cout << "�п�J�ĤT��P�Ǫ��W�l" << endl;
	cin >> name3;
	int grade3 = 0;
	cout << "�п�J�ĤT��P�Ǫ����Z" << endl;
	cin >> grade3;
	system("pause");





	
	switch (grade1>=60)
	{
	case 1: cout<< name1<< "�ή�F" << endl;
	break;
	default: cout<< name1<<"���ή�"<< endl;
	break;

	}
	system("pause");

	switch (grade2 >= 60)
	{
	case 1: cout << name2 << "�ή�F" << endl;
	break;
	default: cout << name2 << "���ή�" << endl;
	break;
	}
	system("pause");

	switch (grade3 >= 60)
	{
	case 1: cout << name3 << "�ή�F" << endl;
	break;
	default: cout << name3 << "���ή�" << endl;
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
	cout << a + b + c << "�H�ή�" << endl;
	cout << 3 - a - b - c << "�H���ή�" << endl;
	system("pause");
}

