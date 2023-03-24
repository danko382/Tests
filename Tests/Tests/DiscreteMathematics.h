#pragma once

namespace Tests {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ DiscreteMathematics
	/// </summary>
	public ref class DiscreteMathematics : public System::Windows::Forms::Form
	{
		System::Windows::Forms::Form^ ChooseTets;	// создаЄм ссылку на исходное окно дл€ возврата к нему после теста
	public:
		DiscreteMathematics(System::Windows::Forms::Form^ ChooseTests)
		{
			this->ChooseTets = ChooseTests;			// получаем ссылку на исходное окно
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~DiscreteMathematics()
		{
			this->ChooseTets->Visible = true;		// возвращаемс€ к исходному окну
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// DiscreteMathematics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"DiscreteMathematics";
			this->Text = L"DiscreteMathematics";
			this->Load += gcnew System::EventHandler(this, &DiscreteMathematics::DiscreteMathematics_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DiscreteMathematics_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
