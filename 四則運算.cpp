#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	cout << "請你輸入你想要的算式" << endl;
	cout << "例如:153+19995*99" << endl;
	cin >> text;


	int name1 = text.find_first_of('+');
	int name2 = text.find_first_of('-');
	int name3 = text.find_first_of('/');
	int name4 = text.find_first_of('*');
	int name5 = text.size();
	if (name1 == -1)
	{
		name1 = 0;
	}
	if (name2 == -1)
	{
		name2 = 0;
	}
	if (name3 == -1)
	{

		name3 = 0;
	}
	if (name4 == -1)
	{
		name4 = 0;
	}
	string sum1 = "";
	string sum2 = "";
	string sum3 = "";
	string sum4 = "";
	string sum5 = "";



	if (name1 > 0)
	{
		if (name1 != 0 && name2 + name3 + name4 >= name1)
		{
			sum1 = text.substr(0, name1);
		}
		else
		{
			sum1 = text.substr(name2 + name3 + name4 + 1, name1 - name2 - name3 - name4 - 1);
			sum5 = text.substr(name1 + 1, name5 - name1 - 1);

		}
	}
	if (name2 > 0)
	{
		if (name2 != 0 && name1 + name3 + name4 >= name2)
		{
			sum2 = text.substr(0, name2);
		}
		else
		{
			sum2 = text.substr(name1 + name3 + name4 + 1, name2 - name1 - name3 - name4);
			sum5 = text.substr(name2 + 1, name5 - name2 - 1);
		}
	}
	if (name3 > 0)
	{
		if (name3 != 0 && name2 + name1 + name4 >= name3)
		{
			sum3 = text.substr(0, name3);

		}
		else
		{
			sum3 = text.substr(name2 + name1 + name4, name3 - name2 - name1 - name4);
			sum5 = text.substr(name3 + 1, name5 - name3 - 1);
		}
	}
	if (name4 > 0)
	{
		if (name4 != 0 && name1 + name3 + name2 >= name4)
		{
			sum4 = text.substr(0, name4);
		}
		else
		{
			sum4 = text.substr(name2 + name3 + name1 + 1, name4 - name2 - name3 - name1);
			sum5 = text.substr(name4 + 1, name5 - name4 - 1);
		}
	}
	double water1 = atof(sum1.c_str());
	double water2 = atof(sum2.c_str());
	double water3 = atof(sum3.c_str());
	double water4 = atof(sum4.c_str());
	double water5 = atof(sum5.c_str());

	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	double e = 0;
	double f = 0;
	double g = 0;
	double h = 0;
	double i = 0;
	double j = 0;
	double k = 0;
	double x = 0;
	double y = 0;
	double z = 0;

	if (name1 != 0)
	{
		if (name2 != 0 && name1 > name2)
		{
			a = water2 - water1 + water5;
			cout << a << endl;
		}
		if (name3 != 0 && name1 > name3)
		{
			b = water3 / water1 + water5;
			cout << b << endl;
		}
		if (name4 != 0 && name1 > name4)
		{
			c = water4 * water1 + water5;
			cout << c << endl;
		}
		if (name2 != 0)
		{
			if (name1 != 0 && name2 > name1)
			{
				d = water1 + water2 - water5;
				cout << d << endl;
			}
			if (name3 != 0 && name2 > name3)
			{
				e = water3 / water2 - water5;
				cout << e << endl;
			}
			if (name4 != 0 && name2 > name4)
			{
				f = water4 * water2 - water5;
				cout << f << endl;
			}
		}

		if (name3 != 0)
		{
			if (name1 != 0 && name3 > name1)
			{
				g = water3 / water5 - water1;
				cout << g << endl;
			}
			if (name2 != 0 && name3 > name2)
			{
				h = water3 / water2 - water5;
				cout << h << endl;
			}
			if (name4 != 0 && name3 > name4)
			{
				i = water4 * water3 / water5;
				cout << i << endl;
			}
		}
		if (name4 != 0)
		{
			if (name1 != 0 && name4 > name1)
			{
				j = water4 * water5 + water1;
				cout << j << endl;
			}
			if (name2 != 0 && name4 > name2)
			{
				k = water4 * water5 - water2;
				cout << k << endl;
			}
			if (name3 != 0 && name4 > name3)
			{
				x = water3 / water4 * water5;
				cout << x << endl;
			}
		}
	}
	system("pause");
 }