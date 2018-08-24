#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    glPointSize(3);
    double i, j;
    for(i = -2; i <= 2 ; i += 4.0 / h){
        b = -1;
        a++;
        for(j = -2; j <= 2 ; j += 4.0 / w){ 
            b++;
            p[a][b].real(i);
            p[a][b].imag(j);
        }
    }
    int e, f;
    for(e = -1 * (h / 2); e < h / 2; e++){
        for(f = -1 * ( w / 2);f < w / 2; f++){
            k = 0;
            z = 0;
            while(abs(z) < 5 && k < 30){
                k++;
                z = z * z + p[e + h / 2][f + w / 2];

            }
            mesh.addVertex(ofVec3f(e, f, 0));
            mesh.addColor(ofColor::fromHsb(abs(k * 6) % 255, 255, 255, 255));
        }
    }

}
//--------------------------------------------------------------
void ofApp::update(){
}
//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    mesh.draw();
    mesh.drawVertices();
    ofSetColor(255);
    ofLine(0, 1000, 0, -1000);
    ofLine(1000, 0, -1000, 0);
    cam.end();
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
