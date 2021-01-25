//
//  kaylon.cpp
//  Orville
//
//  Created by Zhao Dong on 1/24/21.
//
#include "species.h"

Kaylon::Kaylon(double height, int weight)
:Humanoid(height, weight), _isFiring(false){}
bool Kaylon::isFiring(){
    return _isFiring;
}
void Kaylon::startFiring(){
    _isFiring = true;
}
void Kaylon::stopFiring(){
    _isFiring = false;
}