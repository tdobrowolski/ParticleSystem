//
//  Stick.cpp
//  ParticleSystem_1
//
//  Created by Tobiasz Dobrowolski on 12.12.2017.
//

#include "Stick.hpp"

Stick::Stick() {
}

void Stick::setup(int _color) {
    
    color = _color;
    
    length_points = 0;
    
    switch(color) {
        case 0:
            y_stick = 659; // constant
            stickColor.set(30, 30, 30);
            length = 250;
            break;
        case 1:
            y_stick = 409;
            stickColor.set(112, 112, 112);
            length = 250;
            break;
        case 2:
            y_stick = 284;
            stickColor.set(71, 71, 71);
            length = 0;
            break;
        default:
            stickColor.set(105, 105, 105);
            break;
    }
    
}

void Stick::update() {
    
    if(length_points < 830 ) {
        
        length_points += 1;
        
        switch(color) {
            case 0:
                break;
            case 1:
                length -= 0.2;
                y_stick += 0.2;
                break;
            case 2:
                length += 0.3;
                y_stick += 0.15;
                break;
            default:
                break;
        }
    }
}

void Stick::draw() {
    
    ofSetColor(stickColor);
    ofDrawCylinder(512, y_stick, 0, 2, length); //534
    
}

