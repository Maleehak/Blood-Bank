#pragma once
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	string bloodGroup;
	int quantity;
	string name;
	string phoneNumber;
	Person* next;
	Person();
	Person(string name, string bloodGroup,int quantity);
	~Person();
	void addBloodQuantity(int quantity);
	void addPhoneNumber();
	void storeToFile();
	void printInfo();
};