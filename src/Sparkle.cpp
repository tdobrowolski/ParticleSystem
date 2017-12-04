//
//  Sparkle.cpp
//  ParticleSystem_1
//
//  Created by Tobiasz Dobrowolski on 04.12.2017.
//

#include "Sparkle.hpp"

Sparkle::Sparkle() {
}
    
    void Sparkle::setup() {
        
        x = ofRandom(0, ofGetWidth());
        y = ofRandom(0, ofGetHeight());
        z = ofRandom(0, 300);
        
        speedX = ofRandom(-1, 1);
        speedY = ofRandom(-1, 1);
        speedZ = ofRandom(-1, 1);
        
        dim = 50;
        
        color.set(ofRandom(255), ofRandom(255), ofRandom(255));
        
    }
    
    void Sparkle::update() {
        
        x+=speedX;
        y+=speedY;
        z+=speedZ;
        
    }
    
    void Sparkle::draw() {
        
        ofSetColor(color);
        ofDrawIcoSphere(x, y, z, dim);
        
    }
