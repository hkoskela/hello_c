#include <iostream>
#include <unistd.h>
#include <string.h>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    string version;
	string ver = "2.00";
	ifstream file;
	file.open("hello_c.ver");
	getline(file,version);
	while (true)
	{
		cout << "ver: " << version << " " << "2.00" << endl;
		sleep(5);
	}
return 0;
}