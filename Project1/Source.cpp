#include<iostream>
using namespace std;
#include"ListofDonor.h"
int main()
{
	ListofDonor b;
	Person p;
	int option = 0;
	char ans;
	string bloodGroup;
	int quantity;
	string name;
	string phoneNumber;
	do
	{
		cout << "	MENU	" << endl;
		cout << "1.insert" << endl;
		cout << "2.search" << endl;
		cout << "3.Print" << endl;
		cout << "4.Remove" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			{
			//helo world
			cout << "Welcome to blood bank, please only choose the option given for better result";
			cout << "Enter your name" << endl;
			cin >> name;
			cout << "Enter your blood Group" << endl;
			cin >> bloodGroup;
			cout << "Enter blood quantity" << endl;
			cin >> quantity;
			Person* p = new Person(name, bloodGroup, quantity);
			b.insertDonor(p);
			cout << "Do you want to become permanent member? y/n" << endl;
			cin >> ans;
			if (ans == 'y') {
			
				  p->addPhoneNumber();

			}
			break;
			}
		case 2:
		{
			/*cout << "Enter your blood Group" << endl;
			cin >> bloodGroup;
			cout << "Enter blood quantity" << endl;
			cin >> quantity;*/
			Person*p =new Person("j","a+" , 5);
			b.search(p);
			break;
		}
		case 3:
		{
			b.print();
			break;
		}
		case 4:
		{
			b.removeDonor();
			break;
		}
		} 
	} while (option != 5);
}