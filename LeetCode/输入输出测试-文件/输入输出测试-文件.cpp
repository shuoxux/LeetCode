#include <iostream>
#include <vector>

using namespace std;
#define FILESTREAM

int main() {
	int a, b;
	int sum = 0;
#ifdef FILESTREAM
	FILE* stream;
	freopen_s(&stream, "input.txt", "r", stdin);
	freopen_s(&stream, "output.txt", "w", stdout);
	while (cin >> a >> b) {
		sum = a + b;
		cout << sum << endl;
	}
	fclose(stdin);//�ر��ļ� 
	fclose(stdout);//�ر��ļ�
#else
	while (cin >> a >> b) {
		sum = a + b;
		cout << sum << endl;
	}
#endif
	return 0;

}