#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    glPointSize(3);
    double i, j;
    for(i = -2; i <= 2 ; i += 0.0008){
        b = -1;
        a++;
        for(j = -2; j <= 2 ; j += 0.0008){ 
            b++;
            p[a][b].real(i);
            p[a][b].imag(j);
        }   
    }
    int e, f;
    for(e = -2500; e < 2500; e++){
        for(f = -2500;f < 2500; f++){
            k = 0;
            z = 0;
            while(abs(z) < 5 && k < 20){
                k++;
                z = z * z + p[e + 2500][f + 2500];

            }
            mesh.addVertex(ofVec3f(e, f, 0));
            mesh.addColor(ofColor::fromHsb(abs(k * 30) % 255, 255, 255, 255));
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
