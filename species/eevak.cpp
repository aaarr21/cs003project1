//
//  eevak.cpp
//  Orville
//
//  Created by Zhao Dong on 1/23/21.
//

#include <iostream>
#include <string>
#include "species.h"

Eevak::Eevak()
    :_isRunning(false){}
bool Eevak::isRunning(){
    return _isRunning;
    }
void Eevak::run(){
    _isRunning = true;
    }
void Eevak::stop(){
    _isRunning = false;
    }