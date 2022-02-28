// Clinton Garwood
// Created by ncc306 on 2/28/22.
// Bird class file Bird.cpp

#include "Bird.h"
using namespace std;
#include <iostream>

    Bird::Bird(std::string species)
    : bird_type{species}
    {}

    int Bird::get_seeds(){
        return this->seeds;
    }