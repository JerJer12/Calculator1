#pragma once
#include <math.h>

namespace Calculator1 {

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
	private:

		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Button^ button4;
		System::Windows::Forms::Button^ button5;
		System::Windows::Forms::Button^ button6;
		System::Windows::Forms::Button^ button7;
		System::Windows::Forms::Button^ button8;
		System::Windows::Forms::Button^ button9;
		System::Windows::Forms::Button^ button0;
		System::Windows::Forms::Button^ minusButton;
		System::Windows::Forms::Button^ plusButton;
		System::Windows::Forms::Button^ asterixButton;
		System::Windows::Forms::Button^ slashButton;
		System::Windows::Forms::Button^ equalButton;
		System::Windows::Forms::Button^ dotButton;
		System::Windows::Forms::Button^ modButton;
		System::Windows::Forms::Button^ powButton;
		System::Windows::Forms::Button^ squareButton;
		System::Windows::Forms::Button^ clearButton;
	private: System::Windows::Forms::Button^ square2Button;


	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ CE_Button;

	private: System::Windows::Forms::Button^ plusminusButton;


		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->minusButton = (gcnew System::Windows::Forms::Button());
			this->plusButton = (gcnew System::Windows::Forms::Button());
			this->asterixButton = (gcnew System::Windows::Forms::Button());
			this->slashButton = (gcnew System::Windows::Forms::Button());
			this->equalButton = (gcnew System::Windows::Forms::Button());
			this->dotButton = (gcnew System::Windows::Forms::Button());
			this->modButton = (gcnew System::Windows::Forms::Button());
			this->powButton = (gcnew System::Windows::Forms::Button());
			this->squareButton = (gcnew System::Windows::Forms::Button());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->square2Button = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->CE_Button = (gcnew System::Windows::Forms::Button());
			this->plusminusButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(98, 193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::InputNumber);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(12, 23);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(424, 50);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(184, 193);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 80);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::InputNumber);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(270, 193);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 80);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::InputNumber);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(98, 293);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 80);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::InputNumber);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(184, 293);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 80);
			this->button5->TabIndex = 8;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::InputNumber);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(270, 293);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 80);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::InputNumber);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(98, 393);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 80);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::InputNumber);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(184, 393);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 80);
			this->button8->TabIndex = 5;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::InputNumber);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(270, 393);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 80);
			this->button9->TabIndex = 12;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::InputNumber);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button0->Location = System::Drawing::Point(184, 493);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(80, 80);
			this->button0->TabIndex = 11;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::InputNumber);
			// 
			// minusButton
			// 
			this->minusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->minusButton->Location = System::Drawing::Point(356, 293);
			this->minusButton->Name = L"minusButton";
			this->minusButton->Size = System::Drawing::Size(80, 80);
			this->minusButton->TabIndex = 10;
			this->minusButton->Text = L"-";
			this->minusButton->UseVisualStyleBackColor = true;
			this->minusButton->Click += gcnew System::EventHandler(this, &MyForm::InputOperators);
			// 
			// plusButton
			// 
			this->plusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->plusButton->Location = System::Drawing::Point(356, 193);
			this->plusButton->Name = L"plusButton";
			this->plusButton->Size = System::Drawing::Size(80, 80);
			this->plusButton->TabIndex = 9;
			this->plusButton->Text = L"+";
			this->plusButton->UseVisualStyleBackColor = true;
			this->plusButton->Click += gcnew System::EventHandler(this, &MyForm::InputOperators);
			// 
			// asterixButton
			// 
			this->asterixButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->asterixButton->Location = System::Drawing::Point(356, 393);
			this->asterixButton->Name = L"asterixButton";
			this->asterixButton->Size = System::Drawing::Size(80, 80);
			this->asterixButton->TabIndex = 16;
			this->asterixButton->Text = L"*";
			this->asterixButton->UseVisualStyleBackColor = true;
			this->asterixButton->Click += gcnew System::EventHandler(this, &MyForm::InputOperators);
			// 
			// slashButton
			// 
			this->slashButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->slashButton->Location = System::Drawing::Point(356, 493);
			this->slashButton->Name = L"slashButton";
			this->slashButton->Size = System::Drawing::Size(80, 80);
			this->slashButton->TabIndex = 15;
			this->slashButton->Text = L"/";
			this->slashButton->UseVisualStyleBackColor = true;
			this->slashButton->Click += gcnew System::EventHandler(this, &MyForm::InputOperators);
			// 
			// equalButton
			// 
			this->equalButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->equalButton->Location = System::Drawing::Point(270, 493);
			this->equalButton->Name = L"equalButton";
			this->equalButton->Size = System::Drawing::Size(80, 80);
			this->equalButton->TabIndex = 13;
			this->equalButton->Text = L"=";
			this->equalButton->UseVisualStyleBackColor = true;
			this->equalButton->Click += gcnew System::EventHandler(this, &MyForm::equalButton_Click);
			// 
			// dotButton
			// 
			this->dotButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->dotButton->Location = System::Drawing::Point(98, 493);
			this->dotButton->Name = L"dotButton";
			this->dotButton->Size = System::Drawing::Size(80, 80);
			this->dotButton->TabIndex = 17;
			this->dotButton->Text = L",";
			this->dotButton->UseVisualStyleBackColor = true;
			this->dotButton->Click += gcnew System::EventHandler(this, &MyForm::dotButton_Click);
			// 
			// modButton
			// 
			this->modButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->modButton->Location = System::Drawing::Point(98, 93);
			this->modButton->Name = L"modButton";
			this->modButton->Size = System::Drawing::Size(80, 80);
			this->modButton->TabIndex = 18;
			this->modButton->Text = L"%";
			this->modButton->UseVisualStyleBackColor = true;
			this->modButton->Click += gcnew System::EventHandler(this, &MyForm::InputOperators);
			// 
			// powButton
			// 
			this->powButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->powButton->Location = System::Drawing::Point(12, 193);
			this->powButton->Name = L"powButton";
			this->powButton->Size = System::Drawing::Size(80, 80);
			this->powButton->TabIndex = 19;
			this->powButton->Text = L"^";
			this->powButton->UseVisualStyleBackColor = true;
			this->powButton->Click += gcnew System::EventHandler(this, &MyForm::InputOperators);
			// 
			// squareButton
			// 
			this->squareButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->squareButton->Location = System::Drawing::Point(184, 93);
			this->squareButton->Name = L"squareButton";
			this->squareButton->Size = System::Drawing::Size(80, 80);
			this->squareButton->TabIndex = 20;
			this->squareButton->Text = L"√";
			this->squareButton->UseVisualStyleBackColor = true;
			this->squareButton->Click += gcnew System::EventHandler(this, &MyForm::squareButton_Click);
			// 
			// clearButton
			// 
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->clearButton->Location = System::Drawing::Point(356, 93);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(80, 80);
			this->clearButton->TabIndex = 21;
			this->clearButton->Text = L"Clear";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &MyForm::clearButton_Click);
			// 
			// square2Button
			// 
			this->square2Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->square2Button->Location = System::Drawing::Point(12, 293);
			this->square2Button->Name = L"square2Button";
			this->square2Button->Size = System::Drawing::Size(80, 80);
			this->square2Button->TabIndex = 26;
			this->square2Button->Text = L"x^2";
			this->square2Button->UseVisualStyleBackColor = true;
			this->square2Button->Click += gcnew System::EventHandler(this, &MyForm::square2Button_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(12, 493);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 80);
			this->button11->TabIndex = 25;
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(12, 393);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 80);
			this->button12->TabIndex = 24;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// CE_Button
			// 
			this->CE_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->CE_Button->Location = System::Drawing::Point(270, 93);
			this->CE_Button->Name = L"CE_Button";
			this->CE_Button->Size = System::Drawing::Size(80, 80);
			this->CE_Button->TabIndex = 23;
			this->CE_Button->Text = L"CE";
			this->CE_Button->UseVisualStyleBackColor = true;
			this->CE_Button->Click += gcnew System::EventHandler(this, &MyForm::CE_Button_Click);
			// 
			// plusminusButton
			// 
			this->plusminusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->plusminusButton->Location = System::Drawing::Point(12, 93);
			this->plusminusButton->Name = L"plusminusButton";
			this->plusminusButton->Size = System::Drawing::Size(80, 80);
			this->plusminusButton->TabIndex = 22;
			this->plusminusButton->Text = L"+/-";
			this->plusminusButton->UseVisualStyleBackColor = true;
			this->plusminusButton->Click += gcnew System::EventHandler(this, &MyForm::plusminusButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 586);
			this->Controls->Add(this->square2Button);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->CE_Button);
			this->Controls->Add(this->plusminusButton);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->squareButton);
			this->Controls->Add(this->powButton);
			this->Controls->Add(this->modButton);
			this->Controls->Add(this->dotButton);
			this->Controls->Add(this->asterixButton);
			this->Controls->Add(this->slashButton);
			this->Controls->Add(this->equalButton);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->minusButton);
			this->Controls->Add(this->plusButton);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double firstNumber, secondNumber, result;
		String^ operators;


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void InputNumber(System::Object^ sender, System::EventArgs^ e) {

		Button^ Numbers = safe_cast<Button^>(sender);

		if (textBox1->Text == "0")
		{
			textBox1->Text = Numbers->Text;

		}
		else
		{
			textBox1->Text = textBox1->Text + Numbers->Text;

		}
	}

	private: System::Void InputOperators(System::Object^ sender, System::EventArgs^ e) {

		Button^ OperatorCal = safe_cast<Button^>(sender);

		firstNumber = Double::Parse(textBox1->Text);
		textBox1->Text = "";
		operators = OperatorCal->Text;
	}

	private: System::Void dotButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (!textBox1->Text->Contains(","))
		{
			textBox1->Text = textBox1->Text + ",";
		}
	}

	private: System::Void squareButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		firstNumber = Double::Parse(textBox1->Text);
		result = pow(firstNumber, 0.5);
		textBox1->Text = System::Convert::ToString(result);
	}

	private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text = "0";
	}

	private: System::Void square2Button_Click(System::Object^ sender, System::EventArgs^ e) {
		firstNumber = Double::Parse(textBox1->Text);
		result = pow(firstNumber, 2);
		textBox1->Text = System::Convert::ToString(result);
	 }

	private: System::Void plusminusButton_Click(System::Object^ sender, System::EventArgs^ e) {
			
		if (textBox1->Text->Contains("-")) {
			textBox1->Text = textBox1->Text->Remove(0,1);
		}
		else
		{
			textBox1->Text = "-" + textBox1->Text;
		}

	}

	private: System::Void CE_Button_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBox1->Text->Length >= 1) {
			textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
		}
	}

	private: System::Void equalButton_Click(System::Object^ sender, System::EventArgs^ e) {

		secondNumber = Double::Parse(textBox1->Text);

		if (operators == "+")
		{
			result = firstNumber + secondNumber;
			textBox1->Text = System::Convert::ToString(result);
		}
		else if (operators == "-")
		{
			result = firstNumber - secondNumber;
			textBox1->Text = System::Convert::ToString(result);
		}
		else if (operators == "*")
		{
			result = firstNumber * secondNumber;
			textBox1->Text = System::Convert::ToString(result);
		}
		else if (operators == "/")
		{
			result = firstNumber / secondNumber;
			textBox1->Text = System::Convert::ToString(result);
		}
		else if (operators == "%")
		{
			result = (int)firstNumber % (int)secondNumber;
			textBox1->Text = System::Convert::ToString(result);
		}
		else if (operators == "^")
		{
			result = pow(firstNumber, secondNumber);
			textBox1->Text = System::Convert::ToString(result);
		}
	}
	


};
}
