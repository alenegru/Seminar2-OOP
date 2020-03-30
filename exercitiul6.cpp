//
//  exercitiul6.cpp
//  seminar2
//
//  Created by Alexandra Negru on 30/03/2020.
//  Copyright © 2020 Alexandra Negru. All rights reserved.
//

#include "exercitiul6.hpp"
#include <iostream>
#include <fstream>
using namespace std;

void Account::pay(const double& price) {
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

void Account::cashin(const double& price) {
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

void Account::show_balance() {
        cout << "Balance: " << money;
    }

void Account::history() {
        ifstream myReadFile;
        myReadFile.open("date_out.txt");

        int var;
        char output[100];
        if (myReadFile.is_open())
            while (!myReadFile.eof()) {
                myReadFile >> output;
                if (atoi(output) > 0)
                    var = atoi(output);
            }
        else
            cout << "Can't open file";
        money = var;
        myReadFile.close();
}

