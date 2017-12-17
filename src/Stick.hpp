//
//  Stick.hpp
//  ParticleSystem_1
//
//  Created by Tobiasz Dobrowolski on 12.12.2017.
//

#ifndef Stick_hpp
#define Stick_hpp

#include "ofMain.h"

class Stick {
    
public:
    
    void setup(int _color);
    void update();
    void draw();
    
    float x_stick;
    float y_stick;
    float z_stick;
    float length;
    int color;
    
    int length_points;
    
    ofColor stickColor;
    
    Stick();
    
};

#endif /* Stick_hpp */
