#pragma once
#include "ofMain.h"
#include <complex>


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
        
        int k, h = 5000, w = 5000;
        ofMesh mesh;
        complex<double> p, z = 0, c, zn = 0;
        ofBoxPrimitive box;
        long a = -1, b = 0;
        ofEasyCam cam;
};
