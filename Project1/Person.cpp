#include<iostream>
#include <fstream>
using namespace std;

#include<string>

#include"Person.h"
Person::Person() {
	bloodGroup = "";
	quantity = 0;
	name = "";
	phoneNumber = "";

}
Person::Person(string name, string bloodGroup, int quantity) {
	this->bloodGroup = bloodGroup;
	this->name = name;
	this->quantity = quantity;
}
void Person::addBloodQuantity(int quantity) {
	cout << "Enter Blood Quantity" << endl;
	cin >> quantity;
	this->quantity = quantity;
}
void Person::addPhoneNumber() {
	cout << "Enter Phone number" << endl;
	cin >> phoneNumber;
	this->phoneNumber = phoneNumber;
	storeToFile();
}
void Person::printInfo() {
	cout << this->name << endl;
	cout << this->bloodGroup << endl;
	cout << this->quantity << endl;
	cout << this->phoneNumber << endl;
}
void Person::storeToFile()
{

	ofstream fout;
	fout.open("Donors.txt", ios::app);
	if (fout.is_open()) {
		fout << name<<" ";
		fout << bloodGroup<< " ";
		fout << quantity << " ";
		fout << phoneNumber << endl;
	}
	else {
		cout << "File not found" << endl;
	}
	fout.close();
}
Person::~Person() {

}