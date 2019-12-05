
#include <iostream>
#include <Windows.h>
#include "MMSystem.h"
using namespace std;
string decision, PictureDecision;
int main()
{
	cout << "Do you want to hear sound?" << endl;
	cin >> decision;
	if (decision == "Yes" || decision == "Y" || decision == "yes"
		|| decision == "y") {
		PlaySound(TEXT("BRUH.wav"), NULL, SND_ASYNC);
		cout << "GG" << endl;
	}
	else {
		
	}
	cout << "What about a scary picture?" << endl;
	cin >> PictureDecision;
	if (decision == "Yes" || decision == "Y" || decision == "yes"
		|| decision == "y") {
		cout << "ASCII ART" << endl;
	}
	else {
		return 0;
	}
		
	
	return 0;
}

