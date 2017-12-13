#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //ofEnableAlphaBlending();
    ofEnableSmoothing();
    ofSetGlobalAmbientColor(ofColor(255, 255, 255));
    ofSetSmoothLighting(true);
    glEnable(GL_DEPTH_TEST);
    glDisable(GL_CULL_FACE);
    ofSetSphereResolution(100);
    ofSetBackgroundColor(0, 0, 0);
    spotlight.enable();
    
    //Stick mainStick;
    mainStick.setup(500);
    
    for(int i = 0; i < groupOfSparkles.size(); i++){
        
        //int size = (i + 1) * 10;
        
        //int randomX = ofRandom(0, ofGetWidth());
        //int randomY = ofRandom(0, ofGetHeight());
        //int randomZ = ofRandom(0, 300);
        
        //groupOfSparkles[i].setup(randomX, randomY, randomZ, size);
        
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    Sparkle tempSparkle;
    tempSparkle.setup(512, 284, 0, 1);
    groupOfSparkles.push_back(tempSparkle);
    
    Sparkle tempSparkle1;
    tempSparkle1.setup(512, 284, 0, 1);
    groupOfSparkles.push_back(tempSparkle1);
    
    Sparkle tempSparkle2;
    tempSparkle2.setup(512, 284, 0, 1);
    groupOfSparkles.push_back(tempSparkle2);
    
    for(int i = 0; i < groupOfSparkles.size(); i++){
        
        groupOfSparkles[i].update();
        
        if (groupOfSparkles[i].deathPoint > 20) {
            
             groupOfSparkles.erase(groupOfSparkles.begin()+i);
            
        }
        
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i = 0; i < groupOfSparkles.size(); i++){
        
        groupOfSparkles[i].draw();
        
    }
    
    mainStick.draw();
    
    // rysowanie tekstu
    ofDrawBitmapString("Tobiasz Dobrowolski", 840, 733);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    /*for (int i = 0; i < groupOfSparkles.size(); i++) {
        
        float distance = ofDist(x, y, groupOfSparkles[i].x, groupOfSparkles[i].y);
        
        if (distance < groupOfSparkles[i].dim) {
            
            groupOfSparkles.erase(groupOfSparkles.begin()+i);
            
        }
        
    }*/
    
    /*Sparkle tempSparkle;
    tempSparkle.setup(x, y, ofRandom(0, 100), ofRandom(10, 40));
    groupOfSparkles.push_back(tempSparkle);*/

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
