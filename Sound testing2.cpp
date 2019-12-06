
#include <iostream>
#include <Windows.h>
#include "MMSystem.h"
using namespace std;
string decision, PictureDecision, Slamdecision;
int main()
{
	cout << "Do you want to hear sound?" << endl;
	cin >> decision;
	if (decision == "Yes" || decision == "Y" || decision == "yes"
		|| decision == "y") {
		PlaySound(TEXT("FNAFWAV.wav"), NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
		cout << "Low sanity" << endl;//to keep the sound on loop
	}
	else {//Need program to go through all questions(my trouble)

		cout << "What about a scary picture?" << endl;
		cin >> PictureDecision;
		if (decision == "Yes" || decision == "Y" || decision == "yes"
			|| decision == "y") {
			cout << "ASCII ART" << endl;//Different file ascii art?
		}

		else {


			cout << "Want to hear me slamming the desk?" << endl;
			cin >> Slamdecision;
			if (Slamdecision == "Yes" || Slamdecision == "Y" || Slamdecision == "yes"
				|| decision == "y") {
				PlaySound(TEXT("Hitting.wav"), NULL, SND_SYNC | SND_FILENAME);
				cout << "I slammed the desk.." << endl;//should wait for sound to be played first
			}
			else {
			}
		}
		}
		return 0;
	}
}

