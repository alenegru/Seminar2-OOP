#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Account
{
private:

	double money = 100;

public:

	void plata(const double& price) 
	{
		money -= price;

		fstream fin;
		fstream fin2;

		fin.open("date_out.txt", ios::app);
		fin2.open("bani.txt", ios::app);

		fin << "OUT " << price << " " << money << '\n';
		fin2 << money << '\n';

		fin.close();
		fin2.close();
	}

	void incasare(const double& price)
	{
		money += price;

		fstream fin;
		fstream fin2;

		fin.open("date_out.txt", ios::app);
		fin2.open("bani.txt", ios::app);

		fin << "IN " << price << " " << money << '\n';
		fin2 << money << '\n';

		fin.close();
		fin2.close();
	}

	void sold_disponibil()
	{
		cout << "Sold: " << money;
	}

	void read_istoric()
	{

		ifstream myReadFile;
		myReadFile.open("date_out.txt");

		int var;
		char output[100];
		if (myReadFile.is_open()) 
			while (!myReadFile.eof()) 
			{ 
				myReadFile >> output;
				if (atoi(output) > 0)
					var = atoi(output);
			}

		money = var;
		myReadFile.close();
	}
};

//test
    cout << "Test ex1\n";
    char s[100] = "eam_";
    char t[100] = "neam_ca_neam";
    char* r = strfind(s, t);
    cout << r;

    cout << "\n\nTest ex2\n\n";
    ex2();

    cout << "\n\nTest ex4\n";
    char a[10] = "dsada";
    cout << fake_strlen(a) << endl;
    cout << fake_strcpy(s, t);

    cout << "\n\nTest ex6\n";

    Account a1;
    a1.read_istoric();
    //a1.plata(20);
    a1.incasare(30);
    a1.sold_disponibil();
