#include <iostream>
#include <windows.h>
#include "PlayMusic.hpp"
using namespace std;

void playSound(void) {
	
	bool played=PlaySound(TEXT("music.wav"), NULL, SND_ASYNC);
	cout << played;
}

void stopSound(void) {

	bool played = PlaySound(NULL, NULL, SND_ASYNC);
	cout << played;
}