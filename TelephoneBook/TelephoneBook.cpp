#include "TelephoneBook.h"
#include<iostream>
using namespace std;
TelephoneBook::TelephoneBook() : listAbonent(nullptr), count(0)
{
	name = nullptr;
	surname = nullptr;
	telefonNumber = nullptr;
}

TelephoneBook::TelephoneBook(const char* n, const char* s, const char* t) : listAbonent(nullptr), count(0)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	surname = new char[strlen(s) + 1];
	strcpy_s(surname, strlen(s) + 1, s);
	telefonNumber = new char[strlen(t) + 1];
	strcpy_s(telefonNumber, strlen(t) + 1, t);
}

char* TelephoneBook::GetN()
{
	return name;
}

char* TelephoneBook::GetS()
{
	return surname;
}

char* TelephoneBook::GetT()
{
	return telefonNumber;
}

void TelephoneBook::AddAbonent(const char* n, const char* s, const char* t)
{
	//указатель на указатель (массив указателей)
	TelephoneBook** newListAbonent = new TelephoneBook* [count + 1];
	//копируем старые указатели в новый массив
	for (int i = 0; i < count; i++) {
		newListAbonent[i] = listAbonent[i];
	}
	//создаем новый объект и инициализируем
	newListAbonent[count] = new TelephoneBook(n, s, t);
	//удаляем старый массив указателей
	delete[] listAbonent;
	//перенаправляем указатель на новый массив
	listAbonent = newListAbonent;
	count++;
}

void TelephoneBook::DeleteAbonent(int index)
{
	TelephoneBook** newListAbonent = new TelephoneBook* [count - 1];
	for (int i = 0, j = 0; i < count; i++) {
		if (i != index) {
			newListAbonent[j] = listAbonent[i];
			j++;
		}
		else {
			delete listAbonent[i];
		}
	}
	delete[] listAbonent;
	listAbonent = newListAbonent;
	count--;
}


void TelephoneBook::SetN(const char* n)
{
	if (name != nullptr) {
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void TelephoneBook::SetS(const char* s)
{
	if (surname != nullptr) {
		delete[] surname;
	}
	surname = new char[strlen(s) + 1];
	strcpy_s(surname, strlen(s) + 1, s);
}

void TelephoneBook::SetT(const char* t)
{
	if (telefonNumber != nullptr) {
		delete[] telefonNumber;
	}
	telefonNumber = new char[strlen(t) + 1];
	strcpy_s(telefonNumber, strlen(t) + 1, t);
}

void TelephoneBook::Init(const char* n, const char* s, const char* t)
{
	SetN(n);
	SetS(s);
	SetT(t);
}

void TelephoneBook::Output()
{
	for (int i = 0; i < count; i++) {
		listAbonent[i]->Output();
	}
	cout << name << " " << surname << " " << telefonNumber << endl;

}

bool TelephoneBook::SymbolComparison(const char* n, const char* s)
{
	for (int i = 0; ; i++) {
		if (n[i] != s[i]) {
			return false;
		}
		if (n[i] == '\0' && s[i] == '\0') {
			return true; 
		}
	}
}

void TelephoneBook::FoundAbonent()
{
}

TelephoneBook::~TelephoneBook()
{
	delete[] name;
	delete[] surname;
	delete[] telefonNumber;

}
