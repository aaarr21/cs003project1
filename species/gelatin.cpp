//
//  gelatin.cpp
//  Orville
//
//  Created by Zhao Dong on 1/24/21.
//
#include "species.h"

Gelatin::Gelatin(int weight)
:_weight(weight), _shape("sphere"){}
bool Gelatin::operator != (const Gelatin& rhs)const{
    return this != & rhs;
}
int Gelatin::weight(){
    return _weight;
}
const char* Gelatin::shape(){
    return _shape.c_str();
}
void Gelatin::morph(std::string shape){
    if (shape == "flat" || shape == "sphere"){
        _shape = shape;
    }   
}
Gelatin Gelatin::split(){
    Gelatin newGelatin(_weight / 2);
    newGelatin._shape = _shape;
    _weight /= 2;
    return newGelatin;
}
