//
// Created by mikh- on 03.05.2019.
//

#ifndef LABA_4_CHILDDEBUG_H
#define LABA_4_CHILDDEBUG_H
#include <string>
class child {
    std::string name;
    std::string sname;
    int age;
public:
    child(std::string name = "Null", std::string sname = "Null", int age = 0);
    child(const child &alt);
    ~child() {};
    void input();
    void output();
};
#endif //LABA_4_CHILDDEBUG_H
