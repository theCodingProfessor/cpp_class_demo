// Clinton Garwood
// Created by ncc306 on 2/28/22.
// main driver is main.cpp

#include <string>
#include <iostream>
using namespace std;
#include "Bird.h"

int main (){
    cout << "Tweet Tweet, chirp" << endl;

    Bird robin("Robin");
    cout << robin.get_seeds() << endl;


    return 0;
}

