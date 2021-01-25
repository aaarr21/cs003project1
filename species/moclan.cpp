//
//  moclan.cpp
//  Orville
//
//  Created by Zhao Dong on 1/24/21.
//

#include "species.h"

Moclan::Moclan(double height, int weight)
:Humanoid(height, weight), _isEgg(false){};
bool Moclan::isEgg(){
    return _isEgg;
}
Moclan Moclan::layEgg(){
    Moclan moclanEgg(height(), weight());
    moclanEgg._isEgg = true;
    return moclanEgg;
}
void Moclan::hatch(){
    _isEgg = false;
}