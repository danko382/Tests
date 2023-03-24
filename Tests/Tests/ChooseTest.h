#pragma once
#include "DiscreteMathematics.h"

namespace Tests {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ ChooseTest
	/// </summary>
	public ref class ChooseTest : public System::Windows::Forms::Form
	{
	public:
		ChooseTest(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~ChooseTest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnDiscreteMathematics;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnDiscreteMathematics = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnDiscreteMathematics
			// 
			this->btnDiscreteMathematics->Location = System::Drawing::Point(13, 13);
			this->btnDiscreteMathematics->Name = L"btnDiscreteMathematics";
			this->btnDiscreteMathematics->Size = System::Drawing::Size(114, 59);
			this->btnDiscreteMathematics->TabIndex = 0;
			this->btnDiscreteMathematics->Text = L"ƒискретна€ математика";
			this->btnDiscreteMathematics->UseVisualStyleBackColor = true;
			this->btnDiscreteMathematics->Click += gcnew System::EventHandler(this, &ChooseTest::btnDiscreteMathematics_Click);
			// 
			// ChooseTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->btnDiscreteMathematics);
			this->Name = L"ChooseTest";
			this->Text = L"ChooseTest";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnDiscreteMathematics_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		DiscreteMathematics^ discreteMathematics = gcnew DiscreteMathematics(this);	// вызываем окно теста и
		discreteMathematics->Show();												// скрываем исходное окно
	}
	};
}
