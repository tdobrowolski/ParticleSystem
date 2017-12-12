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
        
        //x = ofRandom(0, ofGetWidth());
        //y = ofRandom(0, ofGetHeight());
        //z = ofRandom(0, 300);
        
        //speedX = ofRandom(-1, 1);
        //speedY = ofRandom(-1, 1);
        //speedZ = ofRandom(-1, 1);
        
        speedX = 10;
        speedY = -10;
        speedZ = 10;
        
        dim = 10;
        
        color.set(255, ofRandom(255), 0);
        
    }
    
    void Sparkle::update() {
        
        x += speedX;
        y += speedY;
        z += speedZ;
        
    }
    
    void Sparkle::draw() {
        
        ofSetColor(color);
        ofDrawIcoSphere(x, y, z, dim);
        
    }
