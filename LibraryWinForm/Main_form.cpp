#include "Main_form.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{

	//Book user;
	//user.name = "Sandy";
	//AllocConsole();
	//Console::WriteLine(gcnew String(user.name.c_str()));
	//system("pause");






	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Library::Main_form form;
	Application::Run(%form);
}
