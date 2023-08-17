#include <iostream>

#define MODE 1
	int add() {
		int a;
		int b;
		std::cout << "Введите число 1: ";
		std::cin >> a;
		std::cout << "Введите число 2: ";
			std::cin >> b;
		std::cout << "Результат сложения: " << a + b;
		return a + b;

	}
int main() {
	setlocale(LC_ALL, "RUS");
#if !defined(MODE)
#error
#elif MODE == 0
	std::cout << "Работаю в режиме тренировки";
#elif MODE == 1
	std::cout << "Работаю в боевом режиме" << std::endl;

	add();
#endif
}