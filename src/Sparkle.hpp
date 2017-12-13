//
//  Sparkle.hpp
//  ParticleSystem_1
//
//  Created by Tobiasz Dobrowolski on 04.12.2017.
//

#ifndef Sparkle_hpp
#define Sparkle_hpp

#include "ofMain.h"

class Sparkle {
    
public:
    
    void setup(float _x, float _y, float _z, int _dim);
    void update();
    void draw();
    
    float x;
    float y;
    float z;
    float speedX;
    float speedY;
    float speedZ;
    int dim;
    ofColor sparkleColor;
    
    Sparkle(); // konstruktor
    
private:
    
};

#endif /* Sparkle_hpp */
