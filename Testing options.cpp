

#include <iostream>
using namespace std;
string decision;
int main()
{
	cout << "Choose:" << endl <<
		"option A." << endl <<
		"option B." << endl <<
		"option C." << endl;
	cin >> decision;
	while (decision != "a" && decision != "A"
		&& decision != "b" && decision != "B"
		&& decision != "c" && decision != "C")
	{
		cin.clear();
		cin.ignore();//try to keep program continue running
		continue;
	
	}
	if (decision == "a" || decision == "A") {
		cout << "Do this decision" << endl;
	}
	if (decision == "b" || decision == "B") {
		cout << "This is b's decision" << endl;
	}
	if (decision == "c" || decision == "C") {
		cout << "This is c's decision" << endl;
	}
}

