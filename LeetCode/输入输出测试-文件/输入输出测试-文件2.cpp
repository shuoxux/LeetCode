#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	int i, j;
	int array[4];
	//��ȡ�ļ�
	ifstream infile;
	infile.open("input.txt", ios::in);
	//�ж��Ƿ��ȡ�ɹ�
	if (!infile.is_open())
	{
		cout << "error" << endl;
		return 0;
	}
	//��������
	for (i = 0; i < 4; i++)
	{
		infile >> array[i];
	}
	infile.close();
	//�������
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