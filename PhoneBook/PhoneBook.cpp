// PhoneBook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "stdio.h"
using namespace std;

const int MAXLEN = 10;
const int MAXWIDTH = 2;
const int MAXSIZE = 50;
void storeTheNumber(char phoneBookArray[i][j][k]);

int main()
{
	char phoneBook[MAXLEN][MAXWIDTH][MAXSIZE];
	char userResponse;
	char i;
	char answer = 'y';
	cout << "Welcome to your personal PhoneBook: " << endl;
	for (i = 0; i < MAXLEN &&(answer=='Y' || answer=='y'); i++)
	{
		storeTheNumber(phoneBook);
		cout << "Would you like to enter a name and number?" << endl;
		cin.clear();
		cin.ignore();
	}
	cout << "Your phonebook has: " << endl;
	showBook();
    return 0;
}

void storeTheNumber(char phoneBookArray[i][j])
{
	char contactName[50];
	char phoneNumber[10];
	int i;
	int j;
	for (i = 0; i < MAXLEN;i++)
	{
		cout << "Enter the name of the contact: " << endl;
		gets_s(contactName);
		cout << "Enter the phone number for this contact: " << endl;
		gets_s(phoneNumber);
	}
}

void showBook()
{
	
}

