//
//  humanoid.cpp
//  Orville
//
//  Created by Zhao Dong on 1/24/21.
//

#include "species.h"

Humanoid::Humanoid(double height, int weight)
:_height(height), _weight(weight){}
double Humanoid::height(){
    return _height;
}
int Humanoid::weight(){
    return _weight;
}