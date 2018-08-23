#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    glPointSize(0.1);

    for(double i = -2; i <= -2 ; i += 0.004){
        b = -1;
        a++;
        for(double j = -2; j <= -2 ; j += 0.004){ 
            b++;
            p[a][b].real(i);
            p[a][b].imag(j);
            while(int k = 0;p[a][b].abs() < 2 || k < 30){
                k++;

            mesh.addVertex(ofVec3f(p[a][b].real() * 1000, p[a][b].imag() * 1000, 0));
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
    /*1
    ofSetColor(255);
    box.setPosition(0, 0, 0);
    box.set(150);
    box.draw(); 
    */

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
