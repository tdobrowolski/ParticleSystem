#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofEnableSmoothing();
    ofSetGlobalAmbientColor(ofColor(255, 251, 224));
    ofSetSmoothLighting(true);
    glEnable(GL_DEPTH_TEST);
    glDisable(GL_CULL_FACE);
    ofSetBackgroundColor(0, 0, 0);
    spotlight.enable();
    
    mySound.load("sparklers.mp3");
    mySound.play();
    
    y_spark = 284;
    
    mainStick.setup(0);
    beforeStick.setup(1);
    afterStick.setup(2);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    mainStick.update();
    beforeStick.update();
    afterStick.update();
    
    if(y_spark < 530) {
        
        y_spark += 0.3;

        Sparkle tempSparkle;
        tempSparkle.setup(512, y_spark, 0);
        groupOfSparkles.push_back(tempSparkle);
        
        Sparkle tempSparkle1;
        tempSparkle1.setup(512, y_spark, 0);
        groupOfSparkles.push_back(tempSparkle1);
        
        Sparkle tempSparkle2;
        tempSparkle2.setup(512, y_spark, 0);
        groupOfSparkles.push_back(tempSparkle2);
        
    }
    
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
    beforeStick.draw();
    afterStick.draw();
    
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
