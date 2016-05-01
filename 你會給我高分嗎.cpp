#include <iostream>
using namespace std;
void main()
{
	cout << "老師你會給我高分嗎" << endl;
	cout << "yes or no" << endl;
	char score = 'x';
	cin >> score;
	system("pause");

	char a = 'yes';
	char b = 'no';
	if (score==a)
	{
		cout << "老師你最帥了" << endl;
	}
	else
	{
		cout << "拜託老師你最帥了" << endl; }
	system("pause");
}