
#include "projectHead.hpp"
#include "tictactoeheader.hpp"
#include "MyForm.h"
#include "TicTacToe1.h"
#include "Timer.hpp"
#include "PlayMusic.hpp";

using namespace System;
using namespace System::Windows::Forms;


void main(void){

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	


	Hackathon::mainForm form;
	Application::Run(% form);
	

	pomodoroWSU::TicTacToe game;
	Application::Run(% game);
}