#include "TelephoneBook.h"
#include<iostream>
using namespace std;

TelephoneBook::TelephoneBook()
{
	name = nullptr;
	surname = nullptr;
	telefonNumber = nullptr;
}

TelephoneBook::TelephoneBook(const char* n, const char* s, const char* t)
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
	cout << "Name: " << name << "\tSurname: " << surname << "\tTelefon number: " << telefonNumber << endl;
}

TelephoneBook::~TelephoneBook()
{
	delete[] name;
	delete[] surname;
	delete[] telefonNumber;
}
