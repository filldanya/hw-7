#include <iostream>

#define MODE 0
#if MODE == 1
	int add() {
		int a;
		int b;
		std::cout << "������� ����� 1: ";
		std::cin >> a;
		std::cout << "������� ����� 2: ";
			std::cin >> b;
		std::cout << "��������� ��������: " << a + b;
		return a + b;

	}
#endif
int main() {
	setlocale(LC_ALL, "RUS");
#if !defined(MODE)
#error "���������� ���������� MODE"
	
#elif MODE == 0
	std::cout << "������� � ������ ����������";
#elif MODE == 1
	std::cout << "������� � ������ ������" << std::endl;

	add();
#elif MODE != 0 && MODE != 1
	std::cout << "����������� �����. ���������� ������";
#endif
}