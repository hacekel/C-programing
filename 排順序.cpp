#include<iostream>
using namespace std;

double amazing(double score[10],int y)
{
double x;
for (int u = 0; u < 10; u++)
{
	for (int i = 0; i < 9; i++)
	{
		if (score[i] < score[i + 1])
		{
			x = score[i];
			score[i] = score[i + 1];
			score[i+1] = x;
		}
	}
}
return score[y];
}
void main ()
{
	double score[10];
	cout << "請輸入你要的比的10個數字" << endl;
	for (int a = 0; a < 10;a++)
	{
		cin >> score[a];
	}


	
	for (int u = 0; u < 10; u++)
		amazing(score, u);
	for (int k = 0; k < 10; k++)
		cout << score[k] << endl;
	system("pause");
}
