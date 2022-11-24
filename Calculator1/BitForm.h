#pragma once
#include "MyForm.h"
//#include "Helpers.h"
#include <string>
#include <bitset>
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>
#include <iostream>
#include <sstream>



namespace Calculator1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;

	


	/// <summary>
	/// Summary for BitwiseForm
	/// </summary>
	public ref class BitForm : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		BitForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		BitForm(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BitForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBoxBinary;
	private: System::Windows::Forms::TextBox^ textBoxDecimal;
	private: System::Windows::Forms::TextBox^ textBoxHexa;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ AndButton;
	private: System::Windows::Forms::Button^ XorButton;

	private: System::Windows::Forms::Button^ OrButton;
	private: System::Windows::Forms::Button^ ShiftLButton;
	private: System::Windows::Forms::Button^ ShiftRButton;


	private: System::Windows::Forms::Button^ NotButton;
	private: System::Windows::Forms::Button^ BackButton;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBinary = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDecimal = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHexa = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->AndButton = (gcnew System::Windows::Forms::Button());
			this->XorButton = (gcnew System::Windows::Forms::Button());
			this->OrButton = (gcnew System::Windows::Forms::Button());
			this->ShiftLButton = (gcnew System::Windows::Forms::Button());
			this->ShiftRButton = (gcnew System::Windows::Forms::Button());
			this->NotButton = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(414, 32);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(450, 43);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &BitForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(414, 115);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(450, 43);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &BitForm::textBox2_KeyPress);
			// 
			// textBoxBinary
			// 
			this->textBoxBinary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxBinary->Location = System::Drawing::Point(414, 424);
			this->textBoxBinary->Multiline = true;
			this->textBoxBinary->Name = L"textBoxBinary";
			this->textBoxBinary->ReadOnly = true;
			this->textBoxBinary->Size = System::Drawing::Size(450, 43);
			this->textBoxBinary->TabIndex = 2;
			// 
			// textBoxDecimal
			// 
			this->textBoxDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxDecimal->Location = System::Drawing::Point(414, 489);
			this->textBoxDecimal->Multiline = true;
			this->textBoxDecimal->Name = L"textBoxDecimal";
			this->textBoxDecimal->ReadOnly = true;
			this->textBoxDecimal->Size = System::Drawing::Size(450, 43);
			this->textBoxDecimal->TabIndex = 3;
			// 
			// textBoxHexa
			// 
			this->textBoxHexa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxHexa->Location = System::Drawing::Point(414, 552);
			this->textBoxHexa->Multiline = true;
			this->textBoxHexa->Name = L"textBoxHexa";
			this->textBoxHexa->ReadOnly = true;
			this->textBoxHexa->Size = System::Drawing::Size(450, 43);
			this->textBoxHexa->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(249, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 31);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Number 1:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(249, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 31);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Number 2:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(230, 436);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 31);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Binary:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(230, 501);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 31);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Decimal:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(230, 564);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(178, 31);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Hexadecimal:";
			// 
			// AndButton
			// 
			this->AndButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->AndButton->Location = System::Drawing::Point(414, 206);
			this->AndButton->Name = L"AndButton";
			this->AndButton->Size = System::Drawing::Size(95, 49);
			this->AndButton->TabIndex = 10;
			this->AndButton->Text = L"AND";
			this->AndButton->UseVisualStyleBackColor = true;
			this->AndButton->Click += gcnew System::EventHandler(this, &BitForm::AndButton_Click);
			// 
			// XorButton
			// 
			this->XorButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->XorButton->Location = System::Drawing::Point(769, 206);
			this->XorButton->Name = L"XorButton";
			this->XorButton->Size = System::Drawing::Size(95, 49);
			this->XorButton->TabIndex = 12;
			this->XorButton->Text = L"XOR";
			this->XorButton->UseVisualStyleBackColor = true;
			this->XorButton->Click += gcnew System::EventHandler(this, &BitForm::XorButton_Click);
			// 
			// OrButton
			// 
			this->OrButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->OrButton->Location = System::Drawing::Point(594, 206);
			this->OrButton->Name = L"OrButton";
			this->OrButton->Size = System::Drawing::Size(95, 49);
			this->OrButton->TabIndex = 13;
			this->OrButton->Text = L"OR";
			this->OrButton->UseVisualStyleBackColor = true;
			this->OrButton->Click += gcnew System::EventHandler(this, &BitForm::OrButton_Click);
			// 
			// ShiftLButton
			// 
			this->ShiftLButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ShiftLButton->Location = System::Drawing::Point(594, 305);
			this->ShiftLButton->Name = L"ShiftLButton";
			this->ShiftLButton->Size = System::Drawing::Size(95, 49);
			this->ShiftLButton->TabIndex = 16;
			this->ShiftLButton->Text = L"Shift Left";
			this->ShiftLButton->UseVisualStyleBackColor = true;
			this->ShiftLButton->Click += gcnew System::EventHandler(this, &BitForm::ShiftLButton_Click);
			// 
			// ShiftRButton
			// 
			this->ShiftRButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ShiftRButton->Location = System::Drawing::Point(769, 304);
			this->ShiftRButton->Name = L"ShiftRButton";
			this->ShiftRButton->Size = System::Drawing::Size(95, 49);
			this->ShiftRButton->TabIndex = 15;
			this->ShiftRButton->Text = L"Shift Right";
			this->ShiftRButton->UseVisualStyleBackColor = true;
			this->ShiftRButton->Click += gcnew System::EventHandler(this, &BitForm::ShiftRButton_Click);
			// 
			// NotButton
			// 
			this->NotButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->NotButton->Location = System::Drawing::Point(414, 305);
			this->NotButton->Name = L"NotButton";
			this->NotButton->Size = System::Drawing::Size(95, 49);
			this->NotButton->TabIndex = 14;
			this->NotButton->Text = L"NOT";
			this->NotButton->UseVisualStyleBackColor = true;
			this->NotButton->Click += gcnew System::EventHandler(this, &BitForm::NotButton_Click);
			// 
			// BackButton
			// 
			this->BackButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->BackButton->Location = System::Drawing::Point(23, 13);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(150, 74);
			this->BackButton->TabIndex = 17;
			this->BackButton->Text = L"Calculator";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &BitForm::BackButton_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Binary", L"Decimal", L"Hexadecimal" });
			this->checkedListBox1->Location = System::Drawing::Point(102, 206);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(126, 88);
			this->checkedListBox1->TabIndex = 18;
			// 
			// BitForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(918, 648);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->ShiftLButton);
			this->Controls->Add(this->ShiftRButton);
			this->Controls->Add(this->NotButton);
			this->Controls->Add(this->OrButton);
			this->Controls->Add(this->XorButton);
			this->Controls->Add(this->AndButton);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxHexa);
			this->Controls->Add(this->textBoxDecimal);
			this->Controls->Add(this->textBoxBinary);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"BitForm";
			this->Text = L"BitwiseForm";
			this->Load += gcnew System::EventHandler(this, &BitForm::BitForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
#pragma endregion

		int firstNumber, secondNumber, result;
		String^ binout;


		/* private: std::string zeroDeleter(string binary) {
			while (binary.at(0) == '0') {
				binary.erase(0, 1);
			}
			return binary;

		}*/

	private: System::Void BitForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
		
	}

private: System::Void AndButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (textBox1->Text != "" && textBox2->Text != "") {
			firstNumber = Int64::Parse(textBox1->Text);
			secondNumber = Int64::Parse(textBox2->Text);
			result = firstNumber & secondNumber;
			//decimal output
			textBoxDecimal->Text = System::Convert::ToString(result);
			//binary outpout
			std::string binary = std::bitset<64>(result).to_string();
			//zeroDeleter(binary);
			while (binary.at(0) == '0') {
				binary.erase(0, 1);
			}
			binout = marshal_as<String^>(binary);
			textBoxBinary->Text = binout;
			//hexa outpout
			std::stringstream ss;
			ss << std::hex << result;
			string hexout(ss.str());
			textBoxHexa->Text = marshal_as<String^>(hexout);


		}
		else {
			MessageBox::Show("Please enter numbers in both boxes", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBoxDecimal->Text == "0";
		textBoxBinary->Text == "0";
		textBoxHexa->Text == "0";
	}
	
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57) ))
	{
		e->Handled = true;

	}
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57)))
	{
		e->Handled = true;

	}
}
private: System::Void OrButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (textBox1->Text != "" && textBox2->Text != "") {
			firstNumber = Int64::Parse(textBox1->Text);
			secondNumber = Int64::Parse(textBox2->Text);
			result = firstNumber | secondNumber;
			//decimal output
			textBoxDecimal->Text = System::Convert::ToString(result);
			//binary output
			std::string binary = std::bitset<64>(result).to_string();
			//zeroDeleter(binary);
			while (binary.at(0) == '0') {
				binary.erase(0, 1);
			}
			binout = marshal_as<String^>(binary);
			textBoxBinary->Text = binout;
			//hexa outpout
			std::stringstream ss;
			ss << std::hex << result;
			string hexout(ss.str());
			textBoxHexa->Text = marshal_as<String^>(hexout);
		}
		else {
			MessageBox::Show("Please enter numbers in both boxes", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBoxDecimal->Text == "0";
		textBoxBinary->Text == "0";
		textBoxHexa->Text == "0";
	}
}
private: System::Void XorButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (textBox1->Text != "" && textBox2->Text != "") {
			firstNumber = Int64::Parse(textBox1->Text);
			secondNumber = Int64::Parse(textBox2->Text);
			//decimal output
			result = firstNumber ^ secondNumber;
			textBoxDecimal->Text = System::Convert::ToString(result);
			//binary output
			std::string binary = std::bitset<64>(result).to_string();
			//zeroDeleter(binary);
			while (binary.at(0) == '0') {
				binary.erase(0, 1);
			}
			binout = marshal_as<String^>(binary);
			textBoxBinary->Text = binout;
			//hexa outpout
			std::stringstream ss;
			ss << std::hex << result;
			string hexout(ss.str());
			textBoxHexa->Text = marshal_as<String^>(hexout);
		}
		else {
			MessageBox::Show("Please enter numbers in both boxes", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBoxDecimal->Text == "0";
		textBoxBinary->Text == "0";
		textBoxHexa->Text == "0";
	}
}
private: System::Void ShiftLButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (textBox1->Text != "" && textBox2->Text != "") {
			firstNumber = Int64::Parse(textBox1->Text);
			secondNumber = Int64::Parse(textBox2->Text);
			//decimal output
			result = firstNumber << secondNumber;
			textBoxDecimal->Text = System::Convert::ToString(result);
			//binary output
			std::string binary = std::bitset<64>(result).to_string();
			//zeroDeleter(binary);
			while (binary.at(0) == '0') {
				binary.erase(0, 1);
			}
			binout = marshal_as<String^>(binary);
			textBoxBinary->Text = binout;
			//hexa outpout
			std::stringstream ss;
			ss << std::hex << result;
			string hexout(ss.str());
			textBoxHexa->Text = marshal_as<String^>(hexout);
		}
		else {
			MessageBox::Show("Please enter numbers in both boxes", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBoxDecimal->Text == "0";
		textBoxBinary->Text == "0";
		textBoxHexa->Text == "0";
	}
}
private: System::Void ShiftRButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (textBox1->Text != "" && textBox2->Text != "") {
			firstNumber = Int64::Parse(textBox1->Text);
			secondNumber = Int64::Parse(textBox2->Text);
			result = firstNumber >> secondNumber;
			//decimal output
			textBoxDecimal->Text = System::Convert::ToString(result);
			//binary output
			std::string binary = std::bitset<64>(result).to_string();
			//zeroDeleter(binary);
			while (binary.at(0) == '0') {
				binary.erase(0, 1);
			}
			binout = marshal_as<String^>(binary);
			textBoxBinary->Text = binout;
			//hexa outpout
			std::stringstream ss;
			ss << std::hex << result;
			string hexout(ss.str());
			textBoxHexa->Text = marshal_as<String^>(hexout);
		}
		else {
			MessageBox::Show("Please enter numbers in both boxes", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBoxDecimal->Text == "0";
		textBoxBinary->Text == "0";
		textBoxHexa->Text == "0";
	}
}
private: System::Void NotButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (textBox1->Text != "" && textBox2->Text == "") {
			firstNumber = Int64::Parse(textBox1->Text);
			result = ~firstNumber;
			//decimal output
			textBoxDecimal->Text = System::Convert::ToString(result);
			//binary output
			std::string binary = std::bitset<64>(result).to_string();
			//zeroDeleter(binary);
			while (binary.at(0) == '0') {
				binary.erase(0, 1);
			}
			binout = marshal_as<String^>(binary);
			textBoxBinary->Text = binout;
			//hexa outpout
			std::stringstream ss;
			ss << std::hex << result;
			string hexout(ss.str());
			textBoxHexa->Text = marshal_as<String^>(hexout);
		}
		else {
			MessageBox::Show("Enter your number into ONLY the 'Number 1' field ", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBoxDecimal->Text == "0";
		textBoxBinary->Text == "0";
		textBoxHexa->Text == "0";
	}
}
};
}
