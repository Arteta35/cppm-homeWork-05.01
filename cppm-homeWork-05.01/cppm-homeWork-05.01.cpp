#include <iostream>
#include <Windows.h>

class Figure
{
public:
	Figure() {

		this->count = count;
		this->name = name;
	
	};

	int get_sides(int count) {
		return count;
	}

	std::string get_name(std::string name) {
		return name;
	}

	void print_info() {

		std::cout << name;
		std::cout << count;

	}

protected:

	int count;
	std::string name;
};

class Triangle : public Figure
{
public:

	Triangle(){

		name = "Треугольник";
		count = 4;
		get_name(name);
		get_sides(count);

	}

	std::string name ;
	int count; 

};

class Quadrangle : public Figure
{
public:

	void medod() {

		count = 4;
		//get_sides();

	}

};


int main()
{

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle tri;
	//Quadrangle qu;

	std::cout << "Колличество сторон:" << std::endl;

	tri.print_info();



}