// Sanity Testing

#include <iostream>
using namespace std;
int sanity = 100;
//This will determine if the sanity levels
//will go up or down
//Input
//sanity - the player's status
//Output
//Current sanity level
bool Correction(sanity);
bool a = false;
bool b = true;
int main()
{
	
}

void test_Correction(int sanity) {
	assert(Correction(sanity == false) == sanity - 2);//Deduct if false
	assert(Correction(sanity == true) == sanity + 2);//Add if true
}
bool Correction(int sanity) {
	if (sanity == a) {
		sanity = sanity - 2;
	}
	else {
		sanity = sanity + 2;//Assume its true(b)
	}
	return;
}
