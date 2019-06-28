#pragma once
#include<iostream>
#include<string>
#include"Person.h"
using namespace std;
#include"Person.h"
class ListofDonor
{
public:
	Person* head;
	ListofDonor();
	ListofDonor(Person*&ptr);
	void insertDonor(Person*&ptr);
	void removeDonor();
	Person* search(Person * &ptr);
	void print();


};