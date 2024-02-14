#pragma once

namespace CppCLRWinFormsProject {

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
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	public:
		Form1(void)
		{
			InitializeComponent();
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
			int anchoBoton = 70;
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1->Location = System::Drawing::Point(10, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(312, 30);
			this->textBox1->TabIndex = 0;
		
			this->SuspendLayout();
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel1->Location = System::Drawing::Point(51, 33);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(anchoBoton*4, anchoBoton*5);
			this->flowLayoutPanel1->TabIndex = 0;
			this->Controls->Add(this->textBox1);

			this->Controls->Add(this->flowLayoutPanel1);
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 413);
			for (int numero = 0; numero < 10; numero++)
			{
				System::Windows::Forms::Button^ buttonNumero = (gcnew System::Windows::Forms::Button());
				buttonNumero->Size = System::Drawing::Size(anchoBoton, anchoBoton);
				buttonNumero->TabIndex = numero;
				buttonNumero->Text = numero.ToString();
				buttonNumero->Click += gcnew System::EventHandler(this, &Form1::buttonako_Click);
				this->flowLayoutPanel1->Controls->Add(buttonNumero);
			}

			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
	private: System::Void buttonako_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		String^ texto = button->Text;
		this->textBox1->Text+= texto;
	}
#pragma endregion
	};
}
