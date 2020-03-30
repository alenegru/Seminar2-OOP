//
//  exercitiul6.hpp
//  seminar2
//
//  Created by Alexandra Negru on 30/03/2020.
//  Copyright © 2020 Alexandra Negru. All rights reserved.
//

#ifndef exercitiul6_hpp
#define exercitiul6_hpp

#include <stdio.h>

class Account {
private:

    double money = 100;

public:

    void pay(const double& price);
    void cashin(const double& price);
    void show_balance();
    void history();
};

#endif /* exercitiul6_hpp */
