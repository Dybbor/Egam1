// spline_interpolation_v2.cpp: ������� ���� �������.
#include "Form1.h"

using namespace spline_interpolation_v2;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(cli::array<System::String^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Form1());
	return 0;
}
