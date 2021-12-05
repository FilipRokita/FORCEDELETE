//FORCEDELETE
//Filip Rokita
//www.filiprokita.com

#include <iostream>
#include <string>

using namespace std;

string directory;
string command;
string quotationmark = "\"";
string commandrd;

int main()
{
	system("title FORCEDELETE - www.filiprokita.com");

	cout << "Path: ";
	getline(cin, directory);
	cout << endl;

	command = quotationmark + "del /f " + quotationmark + directory + quotationmark + quotationmark;
	system(command.c_str());
	system("pause");

	return 0;
}