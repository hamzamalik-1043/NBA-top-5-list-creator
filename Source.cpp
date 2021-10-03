#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string a[5];//string array of size 5

	for (int i = 0; i < 5; i++)
	{
		cout << "enter the names in order (use underscores instead of spaces)" << endl;
		cin >> a[i];//put 3 players name into array
	}
	
	string* p1;
	string* p2;
	string* p3;
	string* p4;
	string* p5;
	p1 = &a[0]; //points to first array element which is the first player name entered
	p2 = &a[1];
	p3 = &a[2];
	p4 = &a[3];
	p5 = &a[4];


	ofstream myfile;
	myfile.open("Top 5 NBA players all time.txt");
	myfile << "1.) " << *p1 << " 2.) " << *p2 << " 3.) " << *p3 <<" 4.) " << *p4 << " 5.) " << *p5 << endl;
	myfile.close();
	return 0;
}