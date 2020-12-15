#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int ProcessTXT1(char* fname)
{
	ifstream fin(fname); 
	string s;
	int k = 0; 
	while (getline(fin, s)) 
	{ 
		for (unsigned i = 0; i < s.length(); i++)
			if (s[i] == '+' || s[i] == '-' || s[i] == '=')
				k++;
	}
	return k;
}

int main()
{
	// text files
	char fname[100]; // ім'я першого файлу
	cout << "enter file name 1: "; cin >> fname;
	cout << "k(+-=) = " << ProcessTXT1(fname) << endl;
	return 0;
}