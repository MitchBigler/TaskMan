#pragma once

#include "Task.h"

namespace TaskMan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();

			// Create a list to store the tasks
			tasks = gcnew System::Collections::Generic::List<Task^>();

		}

		// Add the Task obj to the taskList
		void AddTask(Task^ task) 
		{
			tasks->Add(task);
			taskList->Items->Add(task->ToString());
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		} 

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ListBox^ taskList;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ addTaskButton;

	private: System::Windows::Forms::Panel^ panel3;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ taskNameLabel;
	private: System::Windows::Forms::TextBox^ nameText;
	private: System::Windows::Forms::RichTextBox^ descriptionText;


	private: System::Windows::Forms::Label^ taskDescriptionLabel;
	private: System::Windows::Forms::Label^ classRadioLabel;

	private: System::Windows::Forms::RadioButton^ DSAradio;
	private: System::Windows::Forms::RadioButton^ CPPradio;
	private: System::Windows::Forms::RadioButton^ COAradio;
	private: System::Windows::Forms::RadioButton^ otherRadio;
	private: System::Windows::Forms::Button^ resetButton;
	private: System::Windows::Forms::Label^ nameDisplayLabel;
	private: System::Windows::Forms::Label^ descriptionDisplayLabel;
	private: System::Windows::Forms::Button^ deleteButton;
	private: System::Windows::Forms::Button^ duplicateButton;
	private: System::Windows::Forms::Button^ finishedButton;





		   System::Collections::Generic::List<Task^>^ tasks;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->otherRadio = (gcnew System::Windows::Forms::RadioButton());
			this->classRadioLabel = (gcnew System::Windows::Forms::Label());
			this->DSAradio = (gcnew System::Windows::Forms::RadioButton());
			this->CPPradio = (gcnew System::Windows::Forms::RadioButton());
			this->COAradio = (gcnew System::Windows::Forms::RadioButton());
			this->nameText = (gcnew System::Windows::Forms::TextBox());
			this->descriptionText = (gcnew System::Windows::Forms::RichTextBox());
			this->taskDescriptionLabel = (gcnew System::Windows::Forms::Label());
			this->taskNameLabel = (gcnew System::Windows::Forms::Label());
			this->addTaskButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->nameDisplayLabel = (gcnew System::Windows::Forms::Label());
			this->taskList = (gcnew System::Windows::Forms::ListBox());
			this->descriptionDisplayLabel = (gcnew System::Windows::Forms::Label());
			this->finishedButton = (gcnew System::Windows::Forms::Button());
			this->duplicateButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(285, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TaskMan";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->taskList);
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel1->Location = System::Drawing::Point(-1, 35);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(662, 536);
			this->panel1->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel3->Controls->Add(this->resetButton);
			this->panel3->Controls->Add(this->otherRadio);
			this->panel3->Controls->Add(this->classRadioLabel);
			this->panel3->Controls->Add(this->DSAradio);
			this->panel3->Controls->Add(this->CPPradio);
			this->panel3->Controls->Add(this->COAradio);
			this->panel3->Controls->Add(this->nameText);
			this->panel3->Controls->Add(this->descriptionText);
			this->panel3->Controls->Add(this->taskDescriptionLabel);
			this->panel3->Controls->Add(this->taskNameLabel);
			this->panel3->Controls->Add(this->addTaskButton);
			this->panel3->Location = System::Drawing::Point(14, 366);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(636, 153);
			this->panel3->TabIndex = 3;
			// 
			// resetButton
			// 
			this->resetButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->resetButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->resetButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->resetButton->ForeColor = System::Drawing::SystemColors::Control;
			this->resetButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->resetButton->Location = System::Drawing::Point(543, 102);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(80, 35);
			this->resetButton->TabIndex = 12;
			this->resetButton->Text = L"Reset";
			this->resetButton->UseVisualStyleBackColor = false;
			this->resetButton->Click += gcnew System::EventHandler(this, &MainForm::resetButton_Click);
			// 
			// otherRadio
			// 
			this->otherRadio->AutoSize = true;
			this->otherRadio->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->otherRadio->Location = System::Drawing::Point(328, 112);
			this->otherRadio->Name = L"otherRadio";
			this->otherRadio->Size = System::Drawing::Size(51, 17);
			this->otherRadio->TabIndex = 11;
			this->otherRadio->TabStop = true;
			this->otherRadio->Text = L"Other";
			this->otherRadio->UseVisualStyleBackColor = true;
			this->otherRadio->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton1_CheckedChanged);
			// 
			// classRadioLabel
			// 
			this->classRadioLabel->AutoSize = true;
			this->classRadioLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->classRadioLabel->Location = System::Drawing::Point(325, 19);
			this->classRadioLabel->Name = L"classRadioLabel";
			this->classRadioLabel->Size = System::Drawing::Size(71, 13);
			this->classRadioLabel->TabIndex = 10;
			this->classRadioLabel->Text = L"Which class\?";
			this->classRadioLabel->Click += gcnew System::EventHandler(this, &MainForm::label2_Click_1);
			// 
			// DSAradio
			// 
			this->DSAradio->AutoSize = true;
			this->DSAradio->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->DSAradio->Location = System::Drawing::Point(328, 89);
			this->DSAradio->Name = L"DSAradio";
			this->DSAradio->Size = System::Drawing::Size(96, 17);
			this->DSAradio->TabIndex = 9;
			this->DSAradio->TabStop = true;
			this->DSAradio->Text = L"Data Struc/Alg";
			this->DSAradio->UseVisualStyleBackColor = true;
			// 
			// CPPradio
			// 
			this->CPPradio->AutoSize = true;
			this->CPPradio->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->CPPradio->Location = System::Drawing::Point(328, 65);
			this->CPPradio->Name = L"CPPradio";
			this->CPPradio->Size = System::Drawing::Size(44, 17);
			this->CPPradio->TabIndex = 8;
			this->CPPradio->TabStop = true;
			this->CPPradio->Text = L"C++";
			this->CPPradio->UseVisualStyleBackColor = true;
			// 
			// COAradio
			// 
			this->COAradio->AutoSize = true;
			this->COAradio->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->COAradio->Location = System::Drawing::Point(328, 41);
			this->COAradio->Name = L"COAradio";
			this->COAradio->Size = System::Drawing::Size(99, 17);
			this->COAradio->TabIndex = 7;
			this->COAradio->TabStop = true;
			this->COAradio->Text = L"Comp Org/Arch";
			this->COAradio->UseVisualStyleBackColor = true;
			// 
			// nameText
			// 
			this->nameText->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->nameText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nameText->ForeColor = System::Drawing::SystemColors::Window;
			this->nameText->Location = System::Drawing::Point(85, 20);
			this->nameText->MaxLength = 45;
			this->nameText->Name = L"nameText";
			this->nameText->Size = System::Drawing::Size(220, 20);
			this->nameText->TabIndex = 6;
			// 
			// descriptionText
			// 
			this->descriptionText->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->descriptionText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->descriptionText->ForeColor = System::Drawing::SystemColors::Window;
			this->descriptionText->Location = System::Drawing::Point(85, 53);
			this->descriptionText->MaxLength = 2147;
			this->descriptionText->Name = L"descriptionText";
			this->descriptionText->Size = System::Drawing::Size(220, 76);
			this->descriptionText->TabIndex = 5;
			this->descriptionText->Text = L"";
			// 
			// taskDescriptionLabel
			// 
			this->taskDescriptionLabel->AutoSize = true;
			this->taskDescriptionLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->taskDescriptionLabel->Location = System::Drawing::Point(18, 56);
			this->taskDescriptionLabel->Name = L"taskDescriptionLabel";
			this->taskDescriptionLabel->Size = System::Drawing::Size(60, 13);
			this->taskDescriptionLabel->TabIndex = 4;
			this->taskDescriptionLabel->Text = L"Description";
			this->taskDescriptionLabel->UseWaitCursor = true;
			// 
			// taskNameLabel
			// 
			this->taskNameLabel->AutoSize = true;
			this->taskNameLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->taskNameLabel->Location = System::Drawing::Point(18, 20);
			this->taskNameLabel->Name = L"taskNameLabel";
			this->taskNameLabel->Size = System::Drawing::Size(35, 13);
			this->taskNameLabel->TabIndex = 3;
			this->taskNameLabel->Text = L"Name";
			this->taskNameLabel->UseWaitCursor = true;
			this->taskNameLabel->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// addTaskButton
			// 
			this->addTaskButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addTaskButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->addTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->addTaskButton->ForeColor = System::Drawing::SystemColors::Control;
			this->addTaskButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->addTaskButton->Location = System::Drawing::Point(543, 15);
			this->addTaskButton->Name = L"addTaskButton";
			this->addTaskButton->Size = System::Drawing::Size(80, 78);
			this->addTaskButton->TabIndex = 2;
			this->addTaskButton->Text = L"Add Task";
			this->addTaskButton->UseVisualStyleBackColor = false;
			this->addTaskButton->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel2->Controls->Add(this->deleteButton);
			this->panel2->Controls->Add(this->duplicateButton);
			this->panel2->Controls->Add(this->finishedButton);
			this->panel2->Controls->Add(this->descriptionDisplayLabel);
			this->panel2->Controls->Add(this->nameDisplayLabel);
			this->panel2->Location = System::Drawing::Point(329, 16);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(321, 337);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel2_Paint);
			// 
			// nameDisplayLabel
			// 
			this->nameDisplayLabel->AutoSize = true;
			this->nameDisplayLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nameDisplayLabel->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->nameDisplayLabel->Location = System::Drawing::Point(13, 13);
			this->nameDisplayLabel->Name = L"nameDisplayLabel";
			this->nameDisplayLabel->Size = System::Drawing::Size(131, 21);
			this->nameDisplayLabel->TabIndex = 0;
			this->nameDisplayLabel->Text = L"No task selected";
			this->nameDisplayLabel->Visible = false;
			this->nameDisplayLabel->Click += gcnew System::EventHandler(this, &MainForm::label2_Click_2);
			// 
			// taskList
			// 
			this->taskList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->taskList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->taskList->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->taskList->ForeColor = System::Drawing::SystemColors::Window;
			this->taskList->FormattingEnabled = true;
			this->taskList->ItemHeight = 21;
			this->taskList->Location = System::Drawing::Point(14, 16);
			this->taskList->Name = L"taskList";
			this->taskList->Size = System::Drawing::Size(305, 336);
			this->taskList->TabIndex = 0;
			this->taskList->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::listBox1_SelectedIndexChanged);
			// 
			// descriptionDisplayLabel
			// 
			this->descriptionDisplayLabel->AutoSize = true;
			this->descriptionDisplayLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->descriptionDisplayLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->descriptionDisplayLabel->Location = System::Drawing::Point(13, 45);
			this->descriptionDisplayLabel->Name = L"descriptionDisplayLabel";
			this->descriptionDisplayLabel->Size = System::Drawing::Size(65, 20);
			this->descriptionDisplayLabel->TabIndex = 1;
			this->descriptionDisplayLabel->Text = L"Task info";
			// 
			// finishedButton
			// 
			this->finishedButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->finishedButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->finishedButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->finishedButton->ForeColor = System::Drawing::SystemColors::Control;
			this->finishedButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->finishedButton->Location = System::Drawing::Point(217, 283);
			this->finishedButton->Name = L"finishedButton";
			this->finishedButton->Size = System::Drawing::Size(93, 43);
			this->finishedButton->TabIndex = 3;
			this->finishedButton->Text = L"Finished";
			this->finishedButton->UseVisualStyleBackColor = false;
			// 
			// duplicateButton
			// 
			this->duplicateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->duplicateButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->duplicateButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->duplicateButton->ForeColor = System::Drawing::SystemColors::Control;
			this->duplicateButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->duplicateButton->Location = System::Drawing::Point(114, 283);
			this->duplicateButton->Name = L"duplicateButton";
			this->duplicateButton->Size = System::Drawing::Size(93, 43);
			this->duplicateButton->TabIndex = 4;
			this->duplicateButton->Text = L"Duplicate";
			this->duplicateButton->UseVisualStyleBackColor = false;
			// 
			// deleteButton
			// 
			this->deleteButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->deleteButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->deleteButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->deleteButton->ForeColor = System::Drawing::SystemColors::Control;
			this->deleteButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->deleteButton->Location = System::Drawing::Point(10, 283);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(93, 43);
			this->deleteButton->TabIndex = 5;
			this->deleteButton->Text = L"Delete";
			this->deleteButton->UseVisualStyleBackColor = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(659, 566);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// Create var to hold class name
	String^ className;

	// Check which class is checked in radio and assign to var, then clear
	if (COAradio->Checked) {
		className = "Computer Organization and Architecture";
		COAradio->Checked = false;
	} else if (CPPradio->Checked) {
		className = "C++";
		CPPradio->Checked = false;
	} else if (DSAradio->Checked) {
		className = "Data Structures and Algorithms";
		DSAradio->Checked = false;
	} else {
		className = "Other";
		otherRadio->Checked = false;
	}

	// Create new task and add it to the list
	Task^ newTask = gcnew Task(this->nameText->Text, this->descriptionText->Text, className);
	AddTask(newTask);

	// Reset text
	this->nameText->Text = "";
	this->descriptionText->Text = "";
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void resetButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->nameText->Text = "";
	this->descriptionText->Text = "";
}
private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
};
}
