//
//  Stick.cpp
//  ParticleSystem_1
//
//  Created by Tobiasz Dobrowolski on 12.12.2017.
//

#include "Stick.hpp"

Stick::Stick() {
}

void Stick::setup(int _length) {
    
    length = _length;
    
    stickColor.set(192, 192, 192);
    
}

void Stick::update() {}

void Stick::draw() {
    
    ofSetColor(stickColor);
    ofDrawCylinder(512, 534, 0, 2, length);
    
}

