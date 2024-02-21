#include "Global_Page.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create an instance of your main form (replace YourForm with the actual name of your form class)
	//CS346_A2::MyForm form;
	CS346_A2::Global_Page form;
	form.ShowDialog();

	return 0;
}