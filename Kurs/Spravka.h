#pragma once

namespace Kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Spravka
	/// </summary>
	public ref class Spravka : public System::Windows::Forms::Form
	{
	public:
		Spravka(void)
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
		~Spravka()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(392, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Справочная информация. Файл сохраняется всегда по адресу D:\\Report.txt";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1057, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"При снятии галочек требуется нажимать кнопку ОЧИСТИТЬ. В противном случае вычисле"
				L"ния будут неверны. Все поля должны быть заполнены. В поле ОПОЗДАНИЕ можно писать"
				L" 0. В остальных нельзя.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(655, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Авто по умолчанию выбрано Ваз 2109. Чтобы это изменить надо нажимать соответствую"
				L"щую кнопку под изображением авто.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(734, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Краткая информация о транспортных средствах (после названия авто написано то, как"
				L" его выбор повлияет на итоговую стоимость поездки):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(154, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Volkswagen Polo (+ 5.3 рубля)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1079, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Он довольно комфортен, мягко идет по дороге, экономичен и для такси существенным "
				L"плюсом является его большой багажник объемом 490 литров, при разложенных задних "
				L"сидениях увеличивается в двое.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 109);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Hyundai Solaris (+ 6.1 рубля)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 122);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(933, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Он расходует всего 6 литров на каждые 100 километров. Небольшая цена расходников,"
				L" надежности, достаточно комфортный салон в своем классе также радует всех владел"
				L"ьцев.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 153);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(145, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Nissan Almera (+ 5.5 рублей)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 166);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(709, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"В целом плюсы все те же: простота и дешевизна обслуживания, умеренный расход топл"
				L"ива, сравнительно невысокая цена нового авто.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(17, 200);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(146, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Skoda Octavia (+ 6.2 рубля) ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(16, 222);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(951, 13);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Про огромный багажник октавии я думаю вы все уже наслышаны, либо даже пользовалис"
				L"ь им и оценили по достоинству. Просторный и комфортный салон, высокое качество с"
				L"борки.";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(16, 268);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(149, 13);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Renault LOGAN (+ 7.3 рубля)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(16, 285);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(914, 13);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Автомобиль пришелся ко двору из-за объема багажника, в модели нового поколения он"
				L" составляет 510 литров и практически 900 литров при сложенном заднем ряду сидени"
				L"й.";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(18, 318);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(118, 13);
			this->label15->TabIndex = 14;
			this->label15->Text = L"Ваз 2109 (+ 1.2 рубля)";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(17, 335);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(138, 13);
			this->label16->TabIndex = 15;
			this->label16->Text = L"Самый дешёвый вариант.";
			// 
			// Spravka
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1093, 370);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Spravka";
			this->Text = L"Справка";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

};
}
