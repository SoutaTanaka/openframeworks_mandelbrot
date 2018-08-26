#pragma once
#include "ofMain.h"
#include <complex>
#include <ofxGui.h>

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void julia_set();
        void mandelbrot_set();

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
        
        int k;
        ofMesh mesh;
        complex<double> p, z = 0, c, zn = 0;
        ofBoxPrimitive box;
        long a = -1, b = 0;
        ofEasyCam cam;
        
        ofxPanel gui;
        ofxFloatSlider imag;
        ofxFloatSlider real;
        ofxFloatSlider x;
        ofxFloatSlider h;
        ofxFloatSlider y;
        ofxFloatSlider w;
        ofxIntSlider hp;
        ofxButton rerode;
        ofxToggle mandelbrot;






};
