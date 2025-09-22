#pragma once
class TelephoneBook
{
	char* name;
	char* surname;
	char* telefonNumber;
	TelephoneBook** listAbonent;
	int count;
public:
	TelephoneBook();
	TelephoneBook(const char* n, const char* s, const char* t);
	char* GetN();
	char* GetS();
	char* GetT();
	void AddAbonent(const char* n, const char* s, const char* t);
	void DeleteAbonent(int index);
	void SetN(const char* n);
	void SetS(const char* s);
	void SetT(const char* t);

	TelephoneBook** GetListAbonent();
	void Init(const char* n, const char* s, const char* t);
	void Output();
	bool SymbolComparison(const  char* n, const char* s);
	void FoundAbonent(const char* n, const char* s);
	~TelephoneBook();
};

