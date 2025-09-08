#include<iostream>
#include"TelephoneBook.h"
using namespace std;
int main() {
	TelephoneBook obj1;
	obj1.Init("Vlad,", "Surname", "+177777777777");
	obj1.Output();
}