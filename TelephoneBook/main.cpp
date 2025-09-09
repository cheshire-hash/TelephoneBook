#include<iostream>
#include"TelephoneBook.h"
using namespace std;
int main() {
	TelephoneBook list;
	list.AddAbonent("Vlad,", "Surname", "+177777777777");
	list.AddAbonent("Ivan,", "Ivanov", "+188888888888");
	list.AddAbonent("Petr,", "Petrov", "+199999999999");
	list.AddAbonent("Sidor,", "Sidorov", "+166666666666");
	list.DeleteAbonent(1);
	list.Output();
}