#include <iostream>

using namespace std;

int main()
{
	
	cout << "HelloWorld" << endl;

	int Hight = 0;
	int Base = 0;
	float Area = 0.0f;

	cout << "����" << endl;
	cin >> Hight;
	cout << "�غ�" << endl;
	cin >> Base;

	Area = static_cast<float>(Hight) * static_cast<float>(Base) / 2;

	cout << "����" << endl;
	cout << Area << endl;

	return 0;

}