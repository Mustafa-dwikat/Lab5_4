#include <iostream>
using namespace std; 
int main()
{
	int person;
	float bill , epb; // epb : each person bill 
	cout << "How many people did they ate : ";
	cin >> person;
	cout << "How much is the bill : ";
	cin >> bill;
	epb = bill / person;
	cout << "The bill is " << epb << "$ per person.";

}