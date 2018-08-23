#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    glPointSize(3);
    for(double i = -4; i <= 4 ; i += 0.0008){
        b = -1;
        a++;
        for(double j = -4; j <= 4 ; j += 0.0008){ 
            b++;
            p[a][b].real(i);
            p[a][b].imag(j);
        }   
    }

    for(int i = -5000; i < 5000; i++){
        for(int j = -5000; j < 5000; j++){
            int k = 0;
            complex<double> z = 0;
            while(abs(z) < 5 || k < 30){
                k++;
                z = z * z + p[a][b];
            }
            mesh.addVertex(ofVec3f(i, j, 0));
            mesh.addColor(ofColor::fromHsb(k * 30 % 255, 255, 255, 255));
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
