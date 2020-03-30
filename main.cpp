//
//  main.cpp
//  seminar2
//
//  Created by Alexandra Negru on 19/03/2020.
//  Copyright © 2020 Alexandra Negru. All rights reserved.
//

#include <iostream>
#include "exercitiul6.hpp"
#include "seminar2.hpp"
using namespace std;

int main() {
    cout << "Test ex1\n";
    char s[100] = "eam_";
    char t[100] = "neam_ca_neam";
    char* r = strfind(s, t);
    cout << r << endl;

    cout << "Test ex4\n";
    char a[10] = "dsada";
    cout << strlen2(a) << endl;
    cout << strcpy2(s, t);

    cout << "Test ex6\n";

    Account account;
    account.history();
    account.cashin(30);
    account.pay(20);
    account.show_balance();
}
