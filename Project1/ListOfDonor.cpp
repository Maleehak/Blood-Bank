#include <iostream>
using namespace std;
#include "ListofDonor.h"
ListofDonor::ListofDonor() :head(nullptr) {
}
ListofDonor::ListofDonor(Person*& ptr)
{
	head = ptr;
	head->next = nullptr;
	ptr = nullptr;
}
void ListofDonor::insertDonor(Person*&ptr)
{
	if (head)
	{
		ptr->next = head;
		head = ptr;
	}
	else
	{
		head = ptr;
		ptr->next = nullptr;
	}

}
Person* ListofDonor::search(Person*&ptr) {

	int quantity = 0;
	Person* rptr = head;
	while (rptr) {
		if (rptr->bloodGroup == ptr->bloodGroup)
		{
			if (rptr->quantity == ptr->quantity || ptr->quantity == 0) {
				cout << "node found";
				rptr->quantity = 0;

				return rptr;
				break;
			}
			else if (rptr->quantity<ptr->quantity) {
				ptr->quantity = ptr->quantity - rptr->quantity;
				rptr->quantity = 0;
				quantity = ptr->quantity;
			}
			else {
				rptr->quantity = rptr->quantity - ptr->quantity;
				ptr->quantity = 0;
				cout << "node found";

				return rptr;

			}

		}

		rptr = rptr->next;
	}
	cout << "Remaining bottles: " << quantity;
	return NULL;

}
void ListofDonor::removeDonor()
{


	while (head)
	{
		Person* ptr = head;
		ptr = head;
		head = head->next;
		ptr->next = NULL;
		delete ptr;
	}
}
void ListofDonor::print()
{
	Person*rptr = head;
	while (rptr)
	{
		rptr->printInfo();
		rptr = rptr->next;
	}
}