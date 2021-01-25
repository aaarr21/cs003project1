//
//  human.cpp
//  Orville
//
//  Created by Zhao Dong on 1/24/21.
//
#include "species.h"

Human::Human(bool isMale, double height, int weight)
:Humanoid(height, weight), _isMale(isMale){}
bool Human::isMale(){
    return _isMale;
}