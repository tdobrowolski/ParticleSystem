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
    
    void setup(int _length);
    void update();
    void draw();
    
    int x_stick;
    int y_stick;
    int z_stick;
    int length;
    
    ofColor stickColor;
    
    Stick();
    
};

#endif /* Stick_hpp */
