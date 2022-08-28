#pragma once
#include "Spravka.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;


bool proverochka = 0;
double kreslo = 0;
double skidka = 0;
double avto = 1.2;
namespace Kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button4;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 35);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Указывать в метрах:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 10);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(135, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"ФИ заказчика";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox1_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(9, 51);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(135, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Протяжённость пути";
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox2_MouseClick);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(9, 94);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(135, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"Время поездки";
			this->textBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox3_MouseClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 77);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Округлять до минут:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(172, 11);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(197, 17);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Использование детского кресла.";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(172, 35);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(228, 17);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Скидка для постоянного пользователя.";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(263, 93);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(104, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"Итого";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(164, 93);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 19);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(164, 117);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 19);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(9, 117);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(135, 20);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"Опоздание";
			this->textBox5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox5_MouseClick);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(172, 57);
			this->checkBox3->Margin = System::Windows::Forms::Padding(2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(166, 17);
			this->checkBox3->TabIndex = 11;
			this->checkBox3->Text = L"Рассчитать по расстоянию.";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(182, 39);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 64);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(287, 39);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(64, 64);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(72, 39);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(64, 64);
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(182, 143);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(64, 64);
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(287, 143);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(64, 64);
			this->pictureBox5->TabIndex = 16;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(72, 143);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(64, 64);
			this->pictureBox6->TabIndex = 17;
			this->pictureBox6->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Chocolate;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->pictureBox5);
			this->groupBox1->Controls->Add(this->pictureBox4);
			this->groupBox1->Controls->Add(this->pictureBox6);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Location = System::Drawing::Point(611, 9);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(367, 250);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выбор транспорта.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 232);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(239, 13);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Примечание: по умолчанию выбран ВАЗ 2109";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(266, 213);
			this->radioButton6->Margin = System::Windows::Forms::Padding(2);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(73, 17);
			this->radioButton6->TabIndex = 21;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"ВАЗ 2109";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(159, 213);
			this->radioButton5->Margin = System::Windows::Forms::Padding(2);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(102, 17);
			this->radioButton5->TabIndex = 20;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Renault LOGAN";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(58, 213);
			this->radioButton4->Margin = System::Windows::Forms::Padding(2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(96, 17);
			this->radioButton4->TabIndex = 19;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Skoda Octavia";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(58, 108);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(92, 17);
			this->radioButton3->TabIndex = 18;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Nissan Almera";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(266, 108);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(98, 17);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Hyundai Solaris";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(159, 108);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(107, 17);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Volkswagen Polo";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(263, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(291, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"После снятия галочек требуется нажимать ОЧИСТИТЬ";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(405, 14);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(201, 100);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Справка";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(517, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"После нажатия кнопки РАССЧИТАТЬ, информация автоматически записывается в файл (сп"
				L"равка).";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(13, 523);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 54);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Выход";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(997, 589);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Такси DEEP DARK (программа расчёта стоимости поездки)";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		{

			
			if (this->textBox1->Text == "" || this->textBox1->Text == "ФИ заказчика" || this->textBox2->Text == "" || this->textBox2->Text == "Протяжённость пути" || this->textBox3->Text == "" || this->textBox5->Text == "")
			{
				MessageBox::Show("Ошибка!\nВсе поля должны быть заполнены.\nЗначения должны быть больше 0.\nВ поле ОПОЗДАНИЕ можно писать 0.");
				this->textBox1->Text = L"ФИ заказчика";
				this->textBox2->Text = L"Протяжённость пути";
				this->textBox3->Text = L"Время поездки";
				this->textBox5->Text = L"Опоздание";
			}
			else
			{
				if (proverochka == 1)
				{
					double T2 = Convert::ToDouble(this->textBox5->Text);
					double S = Convert::ToDouble(this->textBox2->Text);
					
					if (S <= 0 || T2 < 0)
					{
						MessageBox::Show("Ошибка!\nЗначения должны быть больше 0.\nВ поле ОПОЗДАНИЕ можно писать 0.");
						button2_Click(sender, System::EventArgs::Empty);
					}
					else
					{
						double Sum = (S * 0.02) - (T2 * 0.2) + kreslo - skidka + avto;
						this->textBox4->Clear();
						this->textBox4->Text = Sum.ToString() + " руб.";
					} 
					
					FILE* f;
					String^ d1 = "Фамилия: ";
					String^ d2 = textBox1->Text;
					String^ d3 = "\nПротяжённость пути: ";
					String^ d4 = textBox2->Text;
					String^ d5 = "\nВремя поездки: ";
					String^ d6 = textBox3->Text;
					String^ d7 = "\nВремя опоздания: ";
					String^ d8 = textBox5->Text;
					String^ d9 = "\nИтогавая стоимость поездки: ";
					String^ d10 = textBox4->Text;
					String^ d11 = "\nДетское кресло использовалось: ";
					String^ d12 = "";
					String^ d14 = "";
					String^ d16 = "";
					String^ d18 = "";
					if (kreslo == 0)
					{
						 d12 = "нет";
					}
					else
					{
						 d12 = "да";
					}
					String^ d13 = "\nСкидка в наличии: ";
					if (skidka == 0)
					{
						 d14 = "нет";
					}
					else
					{
						 d14 = "да";
					}
					String^ d15 = "\nРасчёт был по расстоянию: ";
					if (proverochka == 0)
					{
						 d16 = "нет";
					}
					else
					{
						 d16 = "да";
					}
					String^ d17 = "\nВыбранное авто: ";
					if (avto == 1.2)
					{
						 d18 = "Ваз 2109";
					}
					if (avto == 5.5)
					{
						 d18 = "Nissan Almero";
					}
					if (avto == 5.3)
					{
						 d18 = "Volkswagen Polo";
					}
					if (avto == 6.1)
					{
						 d18 = "Hyundai Solaris";
					}
					if (avto == 6.2)
					{
						 d18 = "Skoda Octavia";
					}
					if (avto == 7.3)
					{
						 d18 = "Renault LOGAN";
					}
					String^ kto = d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8 + d9 + d10 + d11 + d12 + d13 + d14 + d15 + d16 + d17 + d18;



					f = fopen("D:\\Report.txt", "wt");
					fprintf(f, "%s, ", kto);
					fclose(f);

					


					
				}
				else
				{
					double T2 = Convert::ToDouble(this->textBox5->Text);
					double T = Convert::ToDouble(this->textBox3->Text);
					if (T <= 0 || T2 < 0)
					{
						MessageBox::Show("Ошибка!\nЗначения должны быть больше 0.\nВ поле ОПОЗДАНИЕ можно писать 0.");
						button2_Click(sender, System::EventArgs::Empty);
					}
					else
					{
						double Sum = (T * 0.2) - (T2 * 0.2) + kreslo - skidka + avto;
						this->textBox4->Clear();
						this->textBox4->Text = Sum.ToString() + " руб.";
					}

					FILE* f;
					String^ d1 = "Фамилия: ";
					String^ d2 = textBox1->Text;
					String^ d3 = "\nПротяжённость пути: ";
					String^ d4 = textBox2->Text;
					String^ d5 = "\nВремя поездки: ";
					String^ d6 = textBox3->Text;
					String^ d7 = "\nВремя опоздания: ";
					String^ d8 = textBox5->Text;
					String^ d9 = "\nИтогавая стоимость поездки: ";
					String^ d10 = textBox4->Text;
					String^ d11 = "\nДетское кресло использовалось: ";
					String^ d12 = "";
					String^ d14 = "";
					String^ d16 = "";
					String^ d18 = "";
					if (kreslo==0)
					{
						 d12 = "нет";
					}
					else
					{
						 d12 = "да";
					}
					String^ d13 = "\nСкидка в наличии: ";
					if (skidka == 0)
					{
						 d14 = "нет";
					}
					else
					{
						 d14 = "да";
					}
					String^ d15 = "\nРасчёт был по расстоянию: ";
					if (proverochka == 0)
					{
						 d16 = "нет";
					}
					else
					{
						 d16 = "да";
					}
					String^ d17 = "\nВыбранное авто: ";
					if (avto == 1.2)
					{
						 d18 = "Ваз 2109";
					}
					if (avto == 5.5)
					{
						 d18 = "Nissan Almero";
					}
					if (avto == 5.3)
					{
						 d18 = "Volkswagen Polo";
					}
					if (avto == 6.1)
					{
						 d18 = "Hyundai Solaris";
					}
					if (avto == 6.2)
					{
						 d18 = "Skoda Octavia";
					}
					if (avto == 7.3)
					{
						 d18 = "Renault LOGAN";
					}
					String^ kto = d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8 + d9 + d10 + d11 + d12 + d13 + d14 + d15 + d16 + d17 + d18;
					

					 
					f = fopen("D:\\Report.txt", "wt");
					fprintf(f, "%s, ", kto);
					fclose(f);
				}
			}
			
				
			
		};

	}
		   private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   this->textBox1->Clear();
			   this->textBox2->Clear();
			   this->textBox3->Clear();
			   this->textBox5->Clear();
			   skidka = 0;
			   kreslo = 0;
			   proverochka = 0;
			   this->checkBox2->CheckState = CheckState::Unchecked;
			   this->checkBox1->CheckState = CheckState::Unchecked;
			   this->checkBox3->CheckState = CheckState::Unchecked;
		   }
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->textBox1->Clear();
	}
	private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->textBox2->Clear();
	}
private: System::Void textBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox3->Clear();
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox5->Clear();
}


private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	proverochka = 1;
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	skidka = 4.30;
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	kreslo = 2.4;
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	avto = 5.3;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	avto = 6.1;
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	avto = 5.5;
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	avto = 6.2;
}
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	avto = 7.3;
}
private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	avto = 1.2;
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Spravka^ f = gcnew Spravka();
	f->Show();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
