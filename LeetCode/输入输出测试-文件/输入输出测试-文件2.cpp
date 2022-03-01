#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	int i, j;
	int array[4];
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
	for (i = 0; i < 4; i++)
	{
		infile >> array[i];
	}
	infile.close();
	//输出数组
	ofstream outfile;

	outfile.open("output.txt", ios::out);
	if (!outfile)
	{
		cout << "no_create";
		return 0;
	}
	for (int i = 0; i < 4; i++)
	{
		outfile << array[i] << " ";
	}
	outfile.close();
	return 0;
}