#include <iostream>
#include <Windows.h>

class Figure
{
public:
	Figure() { };

	void print_info() {

		std::cout << get_name() << ": " << get_sides() << std::endl;
		
	}
protected:

	int get_sides() {
		 return sides_count;
	}

	std::string get_name() {
		return name;
	}

	int sides_count = 0;
	std::string name = "Фигура";
	
};

class Triangle : public Figure
{
public:

	Triangle() {

		sides_count = 3;
		name = "Треугольник";

	}
};

class Quadrangle : public Figure
{
public:

	Quadrangle() {

		sides_count = 4;
		name = "Четырёхугольник";

	}

};


int main()
{

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Figure fig;
	Triangle tri;
	Quadrangle qu;

	std::cout << "Колличество сторон:" << std::endl;

	fig.print_info();
	tri.print_info();
	qu.print_info();


}