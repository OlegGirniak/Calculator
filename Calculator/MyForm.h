#pragma once
#include "UserAction.h"

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ResultLabel;
	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::Button^ ChangeButton;
	private: System::Windows::Forms::Button^ PercentButton;
	protected:




	private: System::Windows::Forms::Button^ divisionButton;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ multiplicationButton;



	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ subtractionButton;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ adiitionButton;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ DotButton;


	private: System::Windows::Forms::Button^ resultButton;
	private: System::Windows::Forms::Label^ HelpLabel;


	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ResultLabel = (gcnew System::Windows::Forms::Label());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->ChangeButton = (gcnew System::Windows::Forms::Button());
			this->PercentButton = (gcnew System::Windows::Forms::Button());
			this->divisionButton = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->multiplicationButton = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->subtractionButton = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->adiitionButton = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->DotButton = (gcnew System::Windows::Forms::Button());
			this->resultButton = (gcnew System::Windows::Forms::Button());
			this->HelpLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ResultLabel
			// 
			resources->ApplyResources(this->ResultLabel, L"ResultLabel");
			this->ResultLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ResultLabel->Name = L"ResultLabel";
			// 
			// ClearButton
			// 
			this->ClearButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			resources->ApplyResources(this->ClearButton, L"ClearButton");
			this->ClearButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->UseVisualStyleBackColor = false;
			this->ClearButton->Click += gcnew System::EventHandler(this, &MyForm::ClearButton_Click);
			// 
			// ChangeButton
			// 
			this->ChangeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			resources->ApplyResources(this->ChangeButton, L"ChangeButton");
			this->ChangeButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ChangeButton->Name = L"ChangeButton";
			this->ChangeButton->UseVisualStyleBackColor = false;
			this->ChangeButton->Click += gcnew System::EventHandler(this, &MyForm::ChangeButton_Click);
			// 
			// PercentButton
			// 
			this->PercentButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			resources->ApplyResources(this->PercentButton, L"PercentButton");
			this->PercentButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->PercentButton->Name = L"PercentButton";
			this->PercentButton->UseVisualStyleBackColor = false;
			this->PercentButton->Click += gcnew System::EventHandler(this, &MyForm::PercentButton_Click);
			// 
			// divisionButton
			// 
			this->divisionButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(101)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			resources->ApplyResources(this->divisionButton, L"divisionButton");
			this->divisionButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->divisionButton->Name = L"divisionButton";
			this->divisionButton->UseVisualStyleBackColor = false;
			this->divisionButton->Click += gcnew System::EventHandler(this, &MyForm::divisionButton_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::NumberButtonAction);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			resources->ApplyResources(this->button6, L"button6");
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::NumberButtonAction);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::NumberButtonAction);
			// 
			// multiplicationButton
			// 
			this->multiplicationButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			resources->ApplyResources(this->multiplicationButton, L"multiplicationButton");
			this->multiplicationButton->Name = L"multiplicationButton";
			this->multiplicationButton->UseVisualStyleBackColor = false;
			this->multiplicationButton->Click += gcnew System::EventHandler(this, &MyForm::multiplicationButton_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			resources->ApplyResources(this->button9, L"button9");
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::NumberButtonAction);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			resources->ApplyResources(this->button10, L"button10");
			this->button10->Name = L"button10";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::NumberButtonAction);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			resources->ApplyResources(this->button11, L"button11");
			this->button11->Name = L"button11";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::NumberButtonAction);
			// 
			// subtractionButton
			// 
			this->subtractionButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			resources->ApplyResources(this->subtractionButton, L"subtractionButton");
			this->subtractionButton->Name = L"subtractionButton";
			this->subtractionButton->UseVisualStyleBackColor = false;
			this->subtractionButton->Click += gcnew System::EventHandler(this, &MyForm::subtractionButton_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			resources->ApplyResources(this->button13, L"button13");
			this->button13->Name = L"button13";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::NumberButtonAction);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			resources->ApplyResources(this->button14, L"button14");
			this->button14->Name = L"button14";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::NumberButtonAction);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			resources->ApplyResources(this->button15, L"button15");
			this->button15->Name = L"button15";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::NumberButtonAction);
			// 
			// adiitionButton
			// 
			this->adiitionButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(101)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			resources->ApplyResources(this->adiitionButton, L"adiitionButton");
			this->adiitionButton->Name = L"adiitionButton";
			this->adiitionButton->UseVisualStyleBackColor = false;
			this->adiitionButton->Click += gcnew System::EventHandler(this, &MyForm::adiitionButton_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			resources->ApplyResources(this->button17, L"button17");
			this->button17->Name = L"button17";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::NumberButtonAction);
			// 
			// DotButton
			// 
			this->DotButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			resources->ApplyResources(this->DotButton, L"DotButton");
			this->DotButton->Name = L"DotButton";
			this->DotButton->UseVisualStyleBackColor = false;
			this->DotButton->Click += gcnew System::EventHandler(this, &MyForm::DotButton_Click);
			// 
			// resultButton
			// 
			this->resultButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(101)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->resultButton->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->resultButton, L"resultButton");
			this->resultButton->Name = L"resultButton";
			this->resultButton->UseVisualStyleBackColor = false;
			this->resultButton->Click += gcnew System::EventHandler(this, &MyForm::resultButton_Click);
			// 
			// HelpLabel
			// 
			resources->ApplyResources(this->HelpLabel, L"HelpLabel");
			this->HelpLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->HelpLabel->Name = L"HelpLabel";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this, L"$this");
			this->Controls->Add(this->HelpLabel);
			this->Controls->Add(this->resultButton);
			this->Controls->Add(this->DotButton);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->adiitionButton);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->subtractionButton);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->multiplicationButton);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->divisionButton);
			this->Controls->Add(this->PercentButton);
			this->Controls->Add(this->ChangeButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->ResultLabel);
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: UserAction userAction = UserAction::None;
	private: String^ firstNumber;
	private: String^ secondNumber;

	private: System::Void NumberButtonAction(System::Object^ sender, System::EventArgs^ e)
	{
		if (ResultLabel->Text->Length > 11)
		{
			System::Drawing::Font^ newFont = gcnew System::Drawing::Font("Arial", 16);
			ResultLabel->Font = newFont;
		}
		else
		{
			System::Drawing::Font^ newFont = gcnew System::Drawing::Font("Arial", 27.75);
			ResultLabel->Font = newFont;
		}
		Button^ currentButton = safe_cast<Button^>(sender);
		
		if (ResultLabel->Text == "0")
			ResultLabel->Text = currentButton->Text;
		else
			ResultLabel->Text += currentButton->Text;
	}	

	private: System::Void adiitionButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SetUserAction(UserAction::Addition);
		SetFirstnumber();
		ResultLabel->Text = "0";
		HelpLabel->Text = "";
		HelpLabel->Text += firstNumber + " + ";
	}

	private: System::Void subtractionButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SetUserAction(UserAction::Subtraction);
		SetFirstnumber();
		ResultLabel->Text = "0";
		HelpLabel->Text = "";
		HelpLabel->Text += firstNumber + " - ";
	}
	
	private: System::Void multiplicationButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SetUserAction(UserAction::Multiplication);
		SetFirstnumber();
		ResultLabel->Text = "0";
		HelpLabel->Text = "";
		HelpLabel->Text += firstNumber + " * ";
	}

	private: System::Void divisionButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SetUserAction(UserAction::Division);
		SetFirstnumber();
		ResultLabel->Text = "0";
		HelpLabel->Text = "";
		HelpLabel->Text += firstNumber + " / ";
	}

	private: System::Void PercentButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SetUserAction(UserAction::Percent);
		SetFirstnumber();
		ResultLabel->Text = "0";
		HelpLabel->Text = "";
		HelpLabel->Text += firstNumber + " % ";
	}

	private: System::Void SetUserAction(UserAction action)
	{
		userAction = action;
	}

	private: System::Void SetFirstnumber()
	{
		firstNumber = ResultLabel->Text;
	}
	
	private: System::Void resultButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		secondNumber = ResultLabel->Text;

		HelpLabel->Text += secondNumber;

		switch (userAction)
		{
		case UserAction::None:
			firstNumber = ResultLabel->Text;
			ResultLabel->Text = firstNumber;
			break;

		case UserAction::Addition:
			ResultLabel->Text = System::Convert::ToString(System::Convert::ToDouble(firstNumber) + System::Convert::ToDouble(secondNumber));
			break;

		case UserAction::Subtraction:
			ResultLabel->Text = System::Convert::ToString(System::Convert::ToDouble(firstNumber) - System::Convert::ToDouble(secondNumber));
			break;

		case UserAction::Multiplication:
			ResultLabel->Text = System::Convert::ToString(System::Convert::ToDouble(firstNumber) * System::Convert::ToDouble(secondNumber));
			break;

		case UserAction::Division:
			if (secondNumber == "0")
			{
				MessageBox::Show("Error, dividing is impossible", "SmthGetWrong", MessageBoxButtons::OK, MessageBoxIcon::Error);
				ResultLabel->Text = "0";
				userAction = UserAction::None;
			}
			else
				ResultLabel->Text = System::Convert::ToString(System::Convert::ToDouble(firstNumber) / System::Convert::ToDouble(secondNumber));
			break;

		case UserAction::Percent:
			ResultLabel->Text = System::Convert::ToString(System::Convert::ToDouble(firstNumber) * System::Convert::ToDouble(secondNumber) / 100);
		default:
			break;
		}

		if (ResultLabel->Text->Length > 11)
		{
			System::Drawing::Font^ newFont = gcnew System::Drawing::Font("Arial", 16);
			ResultLabel->Font = newFont;
		}
		else
		{
			System::Drawing::Font^ newFont = gcnew System::Drawing::Font("Arial", 27.75);
			ResultLabel->Font = newFont;
		}
	}

	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Drawing::Font^ newFont = gcnew System::Drawing::Font("Arial", 27.75);
		ResultLabel->Font = newFont;
		ResultLabel->Text = "0";
		firstNumber = "0";
		secondNumber = "0";
		userAction = UserAction::None;
		HelpLabel->Text = "";
	}

	private: System::Void ChangeButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		double tmpNum = System::Convert::ToDouble(ResultLabel->Text);
		tmpNum *= -1;
		ResultLabel->Text = System::Convert::ToString(tmpNum);
	}

	private: System::Void DotButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ResultLabel->Text += ",";
	}
	
};
}
