#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    glPointSize(3);
    double i, j;
    int e, f;
    for(i = -2, e = -1 * (h / 2); i <= 2 && e < h / 2 ; i += 4.0 / h, e++){
        b = -1;
        a++;
        for(j = -2, f = -1 * ( w / 2); j <= 2 && f < w / 2; j += 4.0 / w, f++){ 
            b++;
            p = 0;
            p.real(i);
            p.imag(j);
            k = 0;
            z = 0;
            while(abs(z) < 20 && k < 50){
                k++;
                z = z * z + p;
            }
            if(k == 50){
            mesh.addVertex(ofVec3f(e, f, 0));
            mesh.addColor(ofColor::fromHsb(abs(k * 3) % 255, 255, 255, 255));
        }}
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
