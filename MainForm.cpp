// Inclue the header file for the form.This is the class 'TaskMan' that's
// being referenced and run
#include "MainForm.h"
#include "Task.h"

// Use namespace allows use of classes like 'array' without having to
// fully classify them each time
using namespace System;
using namespace System::Windows::Forms;


// Specify that the COM threading model is single-thread
[STAThread]

// This is the entry point of the application and main function
void main(array<String^>^ args)
{
	// Make controls (buttons, textboxes, etc.) fit in the windows style
	Application::EnableVisualStyles();
	// Set this to false makes the app render text using GDI+
	Application::SetCompatibleTextRenderingDefault(false);
	// Create an instance of taskman
	TaskMan::MainForm form;

	// Create a list and populate to display in taskList
	System::Collections::Generic::List<Task^>^ tasks = gcnew System::Collections::Generic::List<Task^>();

	Task^ Task1 = gcnew Task("Complete Project", "Finish this program");

	// Add task to test
	tasks->Add(Task1);

	// Adds tasks in the list to taskList
	for each (Task^ task in tasks)
	{
		form.AddTask(task);
	}

	// Start app and run. `%` refers to form to keep it open and responsive
	Application::Run(% form);
}