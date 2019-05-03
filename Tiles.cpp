//
// Created by mikh- on 03.05.2019.
//

#include "Tiles.h"
#include <iostream>
void Tiles::get_Data() {
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Height: " << size_h << std::endl;
    std::cout << "Width: " << size_w << std::endl;
    std::cout << "Price: " << price << std::endl;
};
Tiles::Tiles(std::string brand, double size_h, double size_w, double price): brand(brand), size_h(size_h), size_w(size_w), price(price) {};
Tiles::Tiles(const Tiles &alt): brand(alt.brand), size_h(alt.size_h), size_w(alt.size_w), price(alt.price)  {}