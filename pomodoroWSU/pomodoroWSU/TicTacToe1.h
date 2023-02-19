#pragma once
#include "tictactoeheader.hpp"

namespace pomodoroWSU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TicTacToe
	/// </summary>
	public ref class TicTacToe : public System::Windows::Forms::Form
	{

		int A1, A2, A3, B1, B2, B3, C1, C2, C3;
		int winLoss;
		int aiChoice;

	public:
		TicTacToe(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TicTacToe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonA3;
	private: System::Windows::Forms::Button^ buttonA2;
	private: System::Windows::Forms::Button^ buttonA1;
	private: System::Windows::Forms::Button^ buttonB1;
	private: System::Windows::Forms::Button^ buttonC1;
	protected:

	protected:




	private: System::Windows::Forms::Button^ buttonB2;
	private: System::Windows::Forms::Button^ buttonC2;


	private: System::Windows::Forms::Button^ buttonB3;
	private: System::Windows::Forms::Button^ buttonC3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonA3 = (gcnew System::Windows::Forms::Button());
			this->buttonA2 = (gcnew System::Windows::Forms::Button());
			this->buttonA1 = (gcnew System::Windows::Forms::Button());
			this->buttonB1 = (gcnew System::Windows::Forms::Button());
			this->buttonC1 = (gcnew System::Windows::Forms::Button());
			this->buttonB2 = (gcnew System::Windows::Forms::Button());
			this->buttonC2 = (gcnew System::Windows::Forms::Button());
			this->buttonB3 = (gcnew System::Windows::Forms::Button());
			this->buttonC3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonA3
			// 
			this->buttonA3->Location = System::Drawing::Point(255, 113);
			this->buttonA3->Name = L"buttonA3";
			this->buttonA3->Size = System::Drawing::Size(75, 71);
			this->buttonA3->TabIndex = 0;
			this->buttonA3->UseVisualStyleBackColor = true;
			this->buttonA3->Click += gcnew System::EventHandler(this, &TicTacToe::buttonA3_Click);
			// 
			// buttonA2
			// 
			this->buttonA2->Location = System::Drawing::Point(156, 113);
			this->buttonA2->Name = L"buttonA2";
			this->buttonA2->Size = System::Drawing::Size(75, 71);
			this->buttonA2->TabIndex = 1;
			this->buttonA2->UseVisualStyleBackColor = true;
			this->buttonA2->Click += gcnew System::EventHandler(this, &TicTacToe::buttonA2_Click);
			// 
			// buttonA1
			// 
			this->buttonA1->Location = System::Drawing::Point(55, 113);
			this->buttonA1->Name = L"buttonA1";
			this->buttonA1->Size = System::Drawing::Size(75, 71);
			this->buttonA1->TabIndex = 2;
			this->buttonA1->UseVisualStyleBackColor = true;
			this->buttonA1->Click += gcnew System::EventHandler(this, &TicTacToe::buttonA1_Click);
			// 
			// buttonB1
			// 
			this->buttonB1->Location = System::Drawing::Point(55, 209);
			this->buttonB1->Name = L"buttonB1";
			this->buttonB1->Size = System::Drawing::Size(75, 71);
			this->buttonB1->TabIndex = 3;
			this->buttonB1->UseVisualStyleBackColor = true;
			this->buttonB1->Click += gcnew System::EventHandler(this, &TicTacToe::buttonB1_Click);
			// 
			// buttonC1
			// 
			this->buttonC1->Location = System::Drawing::Point(55, 301);
			this->buttonC1->Name = L"buttonC1";
			this->buttonC1->Size = System::Drawing::Size(75, 71);
			this->buttonC1->TabIndex = 4;
			this->buttonC1->UseVisualStyleBackColor = true;
			this->buttonC1->Click += gcnew System::EventHandler(this, &TicTacToe::buttonC1_Click);
			// 
			// buttonB2
			// 
			this->buttonB2->Location = System::Drawing::Point(156, 209);
			this->buttonB2->Name = L"buttonB2";
			this->buttonB2->Size = System::Drawing::Size(75, 71);
			this->buttonB2->TabIndex = 5;
			this->buttonB2->UseVisualStyleBackColor = true;
			this->buttonB2->Click += gcnew System::EventHandler(this, &TicTacToe::buttonB2_Click);
			// 
			// buttonC2
			// 
			this->buttonC2->Location = System::Drawing::Point(156, 301);
			this->buttonC2->Name = L"buttonC2";
			this->buttonC2->Size = System::Drawing::Size(75, 71);
			this->buttonC2->TabIndex = 6;
			this->buttonC2->UseVisualStyleBackColor = true;
			this->buttonC2->Click += gcnew System::EventHandler(this, &TicTacToe::buttonC2_Click);
			// 
			// buttonB3
			// 
			this->buttonB3->Location = System::Drawing::Point(255, 209);
			this->buttonB3->Name = L"buttonB3";
			this->buttonB3->Size = System::Drawing::Size(75, 71);
			this->buttonB3->TabIndex = 7;
			this->buttonB3->UseVisualStyleBackColor = true;
			this->buttonB3->Click += gcnew System::EventHandler(this, &TicTacToe::buttonB3_Click);
			// 
			// buttonC3
			// 
			this->buttonC3->Location = System::Drawing::Point(255, 301);
			this->buttonC3->Name = L"buttonC3";
			this->buttonC3->Size = System::Drawing::Size(75, 71);
			this->buttonC3->TabIndex = 8;
			this->buttonC3->UseVisualStyleBackColor = true;
			this->buttonC3->Click += gcnew System::EventHandler(this, &TicTacToe::buttonC3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-4, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(389, 85);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Tic Tac Toe";
			this->label1->Click += gcnew System::EventHandler(this, &TicTacToe::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(88, 385);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 25);
			this->label2->TabIndex = 10;
			// 
			// TicTacToe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(383, 430);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonC3);
			this->Controls->Add(this->buttonB3);
			this->Controls->Add(this->buttonC2);
			this->Controls->Add(this->buttonB2);
			this->Controls->Add(this->buttonC1);
			this->Controls->Add(this->buttonB1);
			this->Controls->Add(this->buttonA1);
			this->Controls->Add(this->buttonA2);
			this->Controls->Add(this->buttonA3);
			this->Name = L"TicTacToe";
			this->Text = L"TicTacToe";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void buttonA1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (buttonA1->Text == "") {
			buttonA1->Text = "X";
			 
			label2->Text = "";
			A1 = 1;
			winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 1);
			if (winLoss != 1) {
				aiChoice = aiTurn(A1, A2, A3, B1, B2, B3, C1, C2, C3);
				switch (aiChoice) {
				case 0:
					break;
				case 1:
					buttonA1->Text = "O";
					A1 = 2;
					break;
				case 2:
					buttonA2->Text = "O";
					A2 = 2;
					break;
				case 3:
					buttonA3->Text = "O";
					A3 = 2;
					break;
				case 4:
					buttonB1->Text = "O";
					B1 = 2;
					break;
				case 5:
					buttonB2->Text = "O";
					B2 = 2;
					break;
				case 6:
					buttonB3->Text = "O";
					B3 = 2;
					break;
				case 7:
					buttonC1->Text = "O";
					C1 = 2;
					break;
				case 8:
					buttonC2->Text = "O";
					C2 = 2;
					break;
				case 9:
					buttonC3->Text = "O";
					C3 = 2;
				}
				winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 2);
				switch (winLoss) {
				case 0:
					break;
				case 2:
					label2->Text = "You Lose!";
					break;
				case 3:
					label2->Text = "A Tie!";
				}
			}
			else {
				label2->Text = "You Win!";
			}
		}
		else {
			label2->Text = "Invalid Choice, Try Again";
		}
	}
	private: System::Void buttonA2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (buttonA2->Text == "") {
			buttonA2->Text = "X";
			label2->Text = "";
			A2 = 1;
			winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 1);
			if (winLoss != 1) {
				aiChoice = aiTurn(A1, A2, A3, B1, B2, B3, C1, C2, C3);
				switch (aiChoice) {
				case 0:
					break;
				case 1:
					buttonA1->Text = "O";
					A1 = 2;
					break;
				case 2:
					buttonA2->Text = "O";
					A2 = 2;
					break;
				case 3:
					buttonA3->Text = "O";
					A3 = 2;
					break;
				case 4:
					buttonB1->Text = "O";
					B1 = 2;
					break;
				case 5:
					buttonB2->Text = "O";
					B2 = 2;
					break;
				case 6:
					buttonB3->Text = "O";
					B3 = 2;
					break;
				case 7:
					buttonC1->Text = "O";
					C1 = 2;
					break;
				case 8:
					buttonC2->Text = "O";
					C2 = 2;
					break;
				case 9:
					buttonC3->Text = "O";
					C3 = 2;
				}
				winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 2);
				switch (winLoss) {
				case 0:
					break;
				case 2:
					label2->Text = "You Lose!";
					break;
				case 3:
					label2->Text = "A Tie!";
				}
			}
			else {
				label2->Text = "You Win!";
			}
		}
	    else {
			label2->Text = "Invalid Choice, Try Again";
		}
	}
	private: System::Void buttonA3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (buttonA3->Text == "") {
			buttonA3->Text = "X";
			 
			label2->Text = "";
			A3 = 1;
			winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 1);
			if (winLoss != 1) {
				aiChoice = aiTurn(A1, A2, A3, B1, B2, B3, C1, C2, C3);
				switch (aiChoice) {
				case 0:
					break;
				case 1:
					buttonA1->Text = "O";
					A1 = 2;
					break;
				case 2:
					buttonA2->Text = "O";
					A2 = 2;
					break;
				case 3:
					buttonA3->Text = "O";
					A3 = 2;
					break;
				case 4:
					buttonB1->Text = "O";
					B1 = 2;
					break;
				case 5:
					buttonB2->Text = "O";
					B2 = 2;
					break;
				case 6:
					buttonB3->Text = "O";
					B3 = 2;
					break;
				case 7:
					buttonC1->Text = "O";
					C1 = 2;
					break;
				case 8:
					buttonC2->Text = "O";
					C2 = 2;
					break;
				case 9:
					buttonC3->Text = "O";
					C3 = 2;
				}
				winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 2);
				switch (winLoss) {
				case 0:
					break;
				case 2:
					label2->Text = "You Lose!";
					break;
				case 3:
					label2->Text = "A Tie!";
				}
			}
			else {
				label2->Text = "You Win!";
			}
		}
		else {
			label2->Text = "Invalid Choice, Try Again";
		}
	}
	private: System::Void buttonB1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (buttonB1->Text == "") {
			buttonB1->Text = "X";
			 
			label2->Text = "";
			B1 = 1;
			winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 1);
			if (winLoss != 1) {
				aiChoice = aiTurn(A1, A2, A3, B1, B2, B3, C1, C2, C3);
				switch (aiChoice) {
				case 0:
					break;
				case 1:
					buttonA1->Text = "O";
					A1 = 2;
					break;
				case 2:
					buttonA2->Text = "O";
					A2 = 2;
					break;
				case 3:
					buttonA3->Text = "O";
					A3 = 2;
					break;
				case 4:
					buttonB1->Text = "O";
					B1 = 2;
					break;
				case 5:
					buttonB2->Text = "O";
					B2 = 2;
					break;
				case 6:
					buttonB3->Text = "O";
					B3 = 2;
					break;
				case 7:
					buttonC1->Text = "O";
					C1 = 2;
					break;
				case 8:
					buttonC2->Text = "O";
					C2 = 2;
					break;
				case 9:
					buttonC3->Text = "O";
					C3 = 2;
				}
				winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 2);
				switch (winLoss) {
				case 0:
					break;
				case 2:
					label2->Text = "You Lose!";
					break;
				case 3:
					label2->Text = "A Tie!";
				}
			}
			else {
				label2->Text = "You Win!";
			}
		}
		else {
			label2->Text = "Invalid Choice, Try Again";
		}
	}
	private: System::Void buttonB2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (buttonB2->Text == "") {
			buttonB2->Text = "X";
			 
			label2->Text = "";
			B2 = 1;
			winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 1);
			if (winLoss != 1) {
				aiChoice = aiTurn(A1, A2, A3, B1, B2, B3, C1, C2, C3);
				switch (aiChoice) {
				case 0:
					break;
				case 1:
					buttonA1->Text = "O";
					A1 = 2;
					break;
				case 2:
					buttonA2->Text = "O";
					A2 = 2;
					break;
				case 3:
					buttonA3->Text = "O";
					A3 = 2;
					break;
				case 4:
					buttonB1->Text = "O";
					B1 = 2;
					break;
				case 5:
					buttonB2->Text = "O";
					B2 = 2;
					break;
				case 6:
					buttonB3->Text = "O";
					B3 = 2;
					break;
				case 7:
					buttonC1->Text = "O";
					C1 = 2;
					break;
				case 8:
					buttonC2->Text = "O";
					C2 = 2;
					break;
				case 9:
					buttonC3->Text = "O";
					C3 = 2;
				}
				winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 2);
				switch (winLoss) {
				case 0:
					break;
				case 2:
					label2->Text = "You Lose!";
					break;
				case 3:
					label2->Text = "A Tie!";
				}
			}
			else {
				label2->Text = "You Win!";
			}
		}
		else {
			label2->Text = "Invalid Choice, Try Again";
		}
	}
	private: System::Void buttonB3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (buttonB3->Text == "") {
			buttonB3->Text = "X";
			 
			label2->Text = "";
			B3 = 1;
			winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 1);
			if (winLoss != 1) {
				aiChoice = aiTurn(A1, A2, A3, B1, B2, B3, C1, C2, C3);
				switch (aiChoice) {
				case 0:
					break;
				case 1:
					buttonA1->Text = "O";
					A1 = 2;
					break;
				case 2:
					buttonA2->Text = "O";
					A2 = 2;
					break;
				case 3:
					buttonA3->Text = "O";
					A3 = 2;
					break;
				case 4:
					buttonB1->Text = "O";
					B1 = 2;
					break;
				case 5:
					buttonB2->Text = "O";
					B2 = 2;
					break;
				case 6:
					buttonB3->Text = "O";
					B3 = 2;
					break;
				case 7:
					buttonC1->Text = "O";
					C1 = 2;
					break;
				case 8:
					buttonC2->Text = "O";
					C2 = 2;
					break;
				case 9:
					buttonC3->Text = "O";
					C3 = 2;
				}
				winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 2);
				switch (winLoss) {
				case 0:
					break;
				case 2:
					label2->Text = "You Lose!";
					break;
				case 3:
					label2->Text = "A Tie!";
				}
			}
			else {
				label2->Text = "You Win!";
			}
		}
		else {
			label2->Text = "Invalid Choice, Try Again";
		}
	}
	private: System::Void buttonC1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (buttonC1->Text == "") {
			buttonC1->Text = "X";
			 
			label2->Text = "";
			C1 = 1;
			winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 1);
			if (winLoss != 1) {
				aiChoice = aiTurn(A1, A2, A3, B1, B2, B3, C1, C2, C3);
				switch (aiChoice) {
				case 0:
					break;
				case 1:
					buttonA1->Text = "O";
					A1 = 2;
					break;
				case 2:
					buttonA2->Text = "O";
					A2 = 2;
					break;
				case 3:
					buttonA3->Text = "O";
					A3 = 2;
					break;
				case 4:
					buttonB1->Text = "O";
					B1 = 2;
					break;
				case 5:
					buttonB2->Text = "O";
					B2 = 2;
					break;
				case 6:
					buttonB3->Text = "O";
					B3 = 2;
					break;
				case 7:
					buttonC1->Text = "O";
					C1 = 2;
					break;
				case 8:
					buttonC2->Text = "O";
					C2 = 2;
					break;
				case 9:
					buttonC3->Text = "O";
					C3 = 2;
				}
				winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 2);
				switch (winLoss) {
				case 0:
					break;
				case 2:
					label2->Text = "You Lose!";
					break;
				case 3:
					label2->Text = "A Tie!";
				}
			}
			else {
				label2->Text = "You Win!";
			}
		}
		else {
			label2->Text = "Invalid Choice, Try Again";
		}
	}
	private: System::Void buttonC2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (buttonC2->Text == "") {
			buttonC2->Text = "X";
			 
			label2->Text = "";
			C2 = 1;
			winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 1);
			if (winLoss != 1) {
				aiChoice = aiTurn(A1, A2, A3, B1, B2, B3, C1, C2, C3);
				switch (aiChoice) {
				case 0:
					break;
				case 1:
					buttonA1->Text = "O";
					A1 = 2;
					break;
				case 2:
					buttonA2->Text = "O";
					A2 = 2;
					break;
				case 3:
					buttonA3->Text = "O";
					A3 = 2;
					break;
				case 4:
					buttonB1->Text = "O";
					B1 = 2;
					break;
				case 5:
					buttonB2->Text = "O";
					B2 = 2;
					break;
				case 6:
					buttonB3->Text = "O";
					B3 = 2;
					break;
				case 7:
					buttonC1->Text = "O";
					C1 = 2;
					break;
				case 8:
					buttonC2->Text = "O";
					C2 = 2;
					break;
				case 9:
					buttonC3->Text = "O";
					C3 = 2;
				}
				winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 2);
				switch (winLoss) {
				case 0:
					break;
				case 2:
					label2->Text = "You Lose!";
					break;
				case 3:
					label2->Text = "A Tie!";
				}
			}
			else {
				label2->Text = "You Win!";
			}
		}
		else {
			label2->Text = "Invalid Choice, Try Again";
		}
	}
	private: System::Void buttonC3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (buttonC3->Text == "") {
			buttonC3->Text = "X";
			 
			label2->Text = "";
			C3 = 1;
			winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 1);
			if (winLoss != 1) {
				aiChoice = aiTurn(A1, A2, A3, B1, B2, B3, C1, C2, C3);
				switch (aiChoice) {
				case 0:
					break;
				case 1:
					buttonA1->Text = "O";
					A1 = 2;
					break;
				case 2:
					buttonA2->Text = "O";
					A2 = 2;
					break;
				case 3:
					buttonA3->Text = "O";
					A3 = 2;
					break;
				case 4:
					buttonB1->Text = "O";
					B1 = 2;
					break;
				case 5:
					buttonB2->Text = "O";
					B2 = 2;
					break;
				case 6:
					buttonB3->Text = "O";
					B3 = 2;
					break;
				case 7:
					buttonC1->Text = "O";
					C1 = 2;
					break;
				case 8:
					buttonC2->Text = "O";
					C2 = 2;
					break;
				case 9:
					buttonC3->Text = "O";
					C3 = 2;
				}
				winLoss = isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 2);
				switch (winLoss) {
				case 0:
					break;
				case 2:
					label2->Text = "You Lose!";
					break;
				case 3:
					label2->Text = "A Tie!";
				}
			}
			else {
				label2->Text = "You Win!";
			}
		}
		else {
			label2->Text = "Invalid Choice, Try Again";
		}
	}
};
}
