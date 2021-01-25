//
//  eevak.cpp
//  Orville
//
//  Created by Zhao Dong on 1/23/21.
//

#include <iostream>
#include <string>
#include "apecies.h"

int main() {
    int age;
    double weight, height;
    std::string gender, name;
    
    std::cin >> age >> name >> weight >> height;
    std::cout << "Eevaks are four-legged equines that can run." << std:: ednl;
    eevak ee;
    ee.set_age(age);
    
    
}
