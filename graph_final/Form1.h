#pragma once

namespace graph_final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label8;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightCyan;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(0, 301);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(573, 105);
			this->panel1->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Turquoise;
			this->label7->Location = System::Drawing::Point(345, 67);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(154, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Press Draw after every Change";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Turquoise;
			this->label6->Location = System::Drawing::Point(32, 67);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(244, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"* X, Y are position of Top-Left Corner of Rectangle";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Turquoise;
			this->label5->Location = System::Drawing::Point(345, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Line Style";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Turquoise;
			this->label4->Location = System::Drawing::Point(256, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Height";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Turquoise;
			this->label3->Location = System::Drawing::Point(181, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Width";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Turquoise;
			this->label2->Location = System::Drawing::Point(104, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Y";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Turquoise;
			this->label1->Location = System::Drawing::Point(32, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"X";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(452, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Dot", L"Dash", L"DashDot", L"DashDotDot", L"Solid"});
			this->comboBox1->Location = System::Drawing::Point(337, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(85, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(248, 35);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(69, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(173, 35);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(69, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(98, 35);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(69, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(69, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Turquoise;
			this->label8->Location = System::Drawing::Point(32, 83);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(237, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Eg. Input X=100 Y=100 Widthh=100 Height=100";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(573, 407);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Drawing::Pen^ mypen ; 
		System::Drawing::Graphics^ myGraphics = this->CreateGraphics() ;
		int x = 0 ;
		int y =0 ; 
		int w = 0 ;
		int h =0 ; 
		//int x = System::Convert::ToInt32(textBox1->Text);
		//int y = System::Convert::ToInt32(textBox2->Text);
		//int w = System::Convert::ToInt32(textBox3->Text);
		//int h = System::Convert::ToInt32(textBox4->Text);
		
		try
		{
			x = System::Convert::ToInt32(textBox1->Text);
			y = System::Convert::ToInt32(textBox2->Text);
			w = System::Convert::ToInt32(textBox3->Text);
			h = System::Convert::ToInt32(textBox4->Text);
		}
		catch (...)
		{
			MessageBox::Show(L"Enter valid Integer input");
		}
		
		

		if (x < 0)
		{
			MessageBox::Show(L"Enter +ve Values as a input");
		}
		else if (y < 0)
		{
			MessageBox::Show(L"Enter +ve Values as a input");
		}
		else if (w < 0)
		{
			MessageBox::Show(L"Enter +ve Values as a input");
		}
		else if (h < 0)
		{
			MessageBox::Show(L"Enter +ve Values as a input");
		}
		 
		mypen = gcnew Pen(System::Drawing::Color::Black, 2);
		//mypen->DashStyle = System::Drawing::Drawing2D::DashStyle::Solid;
		if (comboBox1->Text == L"Dot")
		{
			mypen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dot;
		}
		else if (comboBox1->Text == L"Dash")
		{
			mypen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;
		}
		else if (comboBox1->Text == L"DashDot")
		{
			mypen->DashStyle = System::Drawing::Drawing2D::DashStyle::DashDot;
		}
		else if (comboBox1->Text == L"DashDotDot")
		{
			mypen->DashStyle = System::Drawing::Drawing2D::DashStyle::DashDotDot;
		}
		else if (comboBox1->Text == L"Solid")
		{
			mypen->DashStyle = System::Drawing::Drawing2D::DashStyle::Solid;
		}
		else
		{
			MessageBox::Show(L"Line type empty! Defalut is Solid!");
		}
		myGraphics->Clear(SystemColors::Control) ; 
		myGraphics->DrawRectangle(mypen, x, y, w, h);
		
		 }
};
}

