#pragma once
class TelephoneBook
{
	char* name;
	char* surname;
	char* telefonNumber;
public:
	TelephoneBook();
	TelephoneBook(const char* n, const char* s, const char* t);
	char* GetN();
	char* GetS();
	char* GetT();
	TelephoneBook* AddAbonent(TelephoneBook& abonent);
	void SetN(const char* n);
	void SetS(const char* s);
	void SetT(const char* t);

	void Init(const char* n, const char* s, const char* t);
	void Output();
	~TelephoneBook();
};

