// Clinton Garwood
// Created by ncc306 on 2/28/22.
// Bird header file Bird.h

#include <string>
using namespace std;

#ifndef GIT_DEMO_BIRD_H
#define GIT_DEMO_BIRD_H


class Bird {
public:
    Bird(std::string);
    int get_seeds();

private:
    int seeds = 10;
    int nuts = 2;
    std::string bird_type;
};


#endif //GIT_DEMO_BIRD_H
