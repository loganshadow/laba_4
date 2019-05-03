//
// Created by mikh- on 03.05.2019.
//

#ifndef LABA_4_TILES_H
#define LABA_4_TILES_H

#include <string>
class Tiles {
    std::string brand;
    double size_h;
    double size_w;
    double price;
public:
    Tiles(std::string brand = "Null", double size_h = 0, double size_w = 0, double price = 0);
    Tiles(const Tiles &alt);
    ~Tiles() {};
    void get_Data();
};
#endif //LABA_4_TILES_H
