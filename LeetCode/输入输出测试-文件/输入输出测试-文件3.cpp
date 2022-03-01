#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	int i, j;
	int array[2][2];
	//读取文件
	ifstream infile;
	infile.open("input.txt", ios::in);
	//判断是否读取成功
	if (!infile.is_open())
	{
		cout << "error" << endl;
		return 0;
	}
	//输入数组
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			infile >> array[i][j];
		}
	}
	infile.close();
	//输出数组
	ofstream outfile;
	outfile.open("output.txt", ios::out);
	if (!outfile)
	{
		cout << "error" << endl;
		return 0;
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			outfile << array[i][j] << " ";
		}
		outfile << endl;
	}

	return 0;
}