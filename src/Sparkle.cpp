//
//  Sparkle.cpp
//  ParticleSystem_1
//
//  Created by Tobiasz Dobrowolski on 04.12.2017.
//

#include "Sparkle.hpp"

Sparkle::Sparkle() {
}
    
    void Sparkle::setup(float _x, float _y, float _z, int _dim) {
        
        x = _x;
        y = _y;
        z = _z;
        deathPoint = 0;
        
        //x = ofRandom(0, ofGetWidth());
        //y = ofRandom(0, ofGetHeight());
        //z = ofRandom(0, 300);
        
        speedX = ofRandom(-10, 10);
        speedY = ofRandom(-10, 10);
        speedZ = ofRandom(-10, 10);
        
        dim = 3;
        
        sparkleColor.set(255, ofRandom(255), 0);
        
    }
    
    void Sparkle::update() {
        
        x += speedX;
        y += speedY;
        z += speedZ;
        
        deathPoint += 1;
        
    }
    
    void Sparkle::draw() {
        
        ofSetColor(sparkleColor);
        ofDrawIcoSphere(x, y, z, dim);
        
    }
