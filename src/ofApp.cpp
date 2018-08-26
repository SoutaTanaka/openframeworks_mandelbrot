#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){

    gui.setup();
    gui.add(imag.setup("iamg", 0, -2, 2));
    gui.add(real.setup("real", 0, -2, 2));
    gui.add(x.setup("x", -2, -2, 2));
    gui.add(w.setup("w", 4, 0, 4));
    gui.add(y.setup("y", -2, -2, 2));
    gui.add(h.setup("h", 4, 0, 4));
    gui.add(hp.setup("hp X wp", 2000, 500, 5000));
    gui.add(mandelbrot.setup("mandelbrot set", false));
    gui.add(rerode.setup("reload"));

    //ofBackground(0);
    glPointSize(3);
    double i, j, e, f;
    for(i = -2, e = -1 * (hp / 2); i <= 2 && e < hp / 2 ; i += 4.0 / hp, e++){
        b = -1;
        a++;
        for(j = -2, f = -1 * ( hp / 2); j <= 2 && f < hp / 2; j += 4.0 / hp, f++){ 
            b++;
            p = 0; p.real(i);
            p.imag(j);
            k = 0;
            z = 0;
            z.real(imag);
            z.imag(real);
            while(abs(p) < 2 && k < 400){
                k++;
                p = p * p + z;
            }
            mesh.addVertex(ofVec3f(e / 2, f / 2, 0));
            mesh.addColor(ofColor::fromHsb(abs(k * 1) % 255, 255, 255, 255));
        }
    }
}
//--------------------------------------------------------------
//

void ofApp::julia_set(){
    mesh.clear();
    double i, j, e, f;
    for(i = x, e = -1 * (hp / 2); i <= x + w && e < hp / 2 ; i += abs(w) / hp, e++){
        b = -1;
        a++;
        for(j = y, f = -1 * ( hp / 2); j <= y + h && f < hp / 2; j += abs(h) / hp, f++){ 
            b++;
            p = 0; p.real(i);
            p.imag(j);
            k = 0;
            z = 0;
            z.real(real);
            z.imag(imag);
            while(abs(p) < 2 && k < 400){
                k++;
                p = p * p + z;
            }
            mesh.addVertex(ofVec3f(e / 2, f / 2, 0));
            mesh.addColor(ofColor::fromHsb(abs(k * 1) % 255, 255, 255, 255));
        }
    }
}

void ofApp::mandelbrot_set(){
    mesh.clear();
    double i, j, e, f;
    for(i = x, e = -1 * (hp / 2); i <= x + w && e < hp / 2 ; i += w / hp, e++){
        b = -1;
        a++;
        for(j = y, f = -1 * ( hp / 2); j <= y + h && f < hp / 2; j += h / hp, f++){ 
            b++;
            p = 0;
            p.real(i);
            p.imag(j);
            k = 0;
            z = 0;
            while(abs(z) < 20 && k < 400){
                k++;
                z = z * z + p;
            }
            mesh.addVertex(ofVec3f(e / 2, f / 2, 0));
            mesh.addColor(ofColor::fromHsb(abs(k * 3) % 255, 255, 255, 255));
        }
    }
}

void ofApp::update(){
        
    if(rerode == true){
        if(mandelbrot == true){
            ofApp::mandelbrot_set();
        }else{
            ofApp::julia_set();
        }
    }




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
    gui.draw();
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
