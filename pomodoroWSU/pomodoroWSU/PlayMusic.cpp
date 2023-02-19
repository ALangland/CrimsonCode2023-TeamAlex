#include <iostream>
#include <windows.h>
using namespace std;

void playSound(void) {
	
	bool played=PlaySound(TEXT("music.wav"), NULL, SND_SYNC);
	cout << played;
}