// bookshell.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#ifndef book_h
#define book_h
#include <iostream>
#include <string>

using namespace std;

class Book {

public:
	string Name;
	int Pages;
	Book() {
		Name = '-';
		Pages = 0;
	}
	
	string gerName() {
		return Name;
	}
	
	int getPages() {
		return Pages;
	}
	void Print() {
		cout << "Book: " << Name << ", p." << Pages << "\n";
	}
};
#endif


