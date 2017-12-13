#pragma once

#include "ofMain.h"
#include "Sparkle.hpp"
#include "Stick.hpp"

#define NSPARKLES 10

class ofApp : public ofBaseApp{

	public:
        
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    //Sparkle groupOfSparkles[NSPARKLES];
    
    vector <Sparkle> groupOfSparkles;
    
    Stick mainStick;
    
    ofLight spotlight;
		
};
