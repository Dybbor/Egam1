#include "MyForm.h"

using namespace Egam2;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(cli::array<System::String^>^ args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	setlocale(LC_ALL, "Russian");
	// �������� �������� ���� � ��� ������
	Application::Run(gcnew MyForm());
	return 0;
}
