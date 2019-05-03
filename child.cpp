//
// Created by mikh- on 03.05.2019.
//

#include "child.h"
#include <iostream>
void child::output() {
    std::cout << "Child data:" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "SecondName: "  << sname << std::endl;
    std::cout << "Age: "  << age << std::endl;
};
void child::input() {
    std::cout << "Enter child data" << std::endl;
    std::cin >> name;
    std::cin >> sname;
    std::cin >> age;
};
child::child(std::string name, std::string sname, int age): name(name), sname(sname), age(age) {};
child::child(const child &alt): name(alt.name), sname(alt.sname), age(alt.age) {};
