#include "ofApp.h"
#include "iostream"
#include "chrono"
#include "thread"

//--------------------------------------------------------------
void ofApp::setup(){


  sound.load("CodingAudio.wav");
  sound.play();
  sound.setLoop(true);
  video.load("VideoforBackground.mov"); // Adjust the path as needed
  video.play();

  gui.setup();
  gui.add(audioamplitude.set("audioamplitude", 0.5, 0.0, 1.0));
  gui.add(visualdecay.set("visualdecay", 0.5, 0.0, 1.0));

  fft = new float[512];
   for (int i = 0; i < 512; i++) {
    fft[i] = 0;
  }
  bands = 512;

}

//--------------------------------------------------------------
void ofApp::update(){
  ofSoundUpdate();
  video.update(); // Update the video frame
   if (video.getIsMovieDone()) {
       video.play(); // Restart the video if it's done
    }

    soundSpectrum = ofSoundGetSpectrum(bands);
   for (int i = 0; i < bands; i++) {
     fft[i] *= 0.9;
     if (fft[i] < soundSpectrum[i]) {
       fft[i] = soundSpectrum[i];
     }
   }
}

//--------------------------------------------------------------
void ofApp::draw(){


if (drawVideo) {
  video.draw(0, 0, ofGetWidth(), ofGetHeight());
}

ofEnableBlendMode(OF_BLENDMODE_ALPHA);

for (int i = 0; i < bands; i++){
    int r = 255;
    int g = 255;
    int b = 255;

    ofSetColor(r, 0, 0, 128);
    ofFill();
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, fft[i]*1500);

    ofSetColor(0, g, 0, 128);
    ofFill();
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2.05, fft[i]*1500);

    ofSetColor(r, g, b, 245);
    ofFill();
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2.05, fft[i]*1250);

    ofSetColor(0, 0, b, 128);
    ofFill();
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/1.95, fft[i]*1500);

    ofSetColor(r, g, b, 200);
    ofNoFill();
    ofDrawCircle(ofGetWidth()/2.05, ofGetHeight()/2, fft[i]*500);

    ofSetColor(r, g, b, 200);
    ofNoFill();
    ofDrawCircle(ofGetWidth()/1.95, ofGetHeight()/2, fft[i]*500);

//-----CircleHell---------------
    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/1, ofGetHeight()/1, fft[i]*1000);

    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/1000, ofGetHeight()/1, fft[i]*1000);

    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/1, ofGetHeight()/1000, fft[i]*1000);

    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/1000, ofGetHeight()/1000, fft[i]*1000);

//----Smaller Circle Hell---------------
    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/1.32, ofGetHeight()/1, fft[i]*250);

    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/4, ofGetHeight()/1, fft[i]*250);

    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/1.32, ofGetHeight()/1000, fft[i]*250);

    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/4, ofGetHeight()/1000, fft[i]*250);

//----Smallest Circle Hell--------------

//  ofSetColor(0, 0, 0);
//  ofFill();
//  ofDrawCircle(ofGetWidth()/1.50, ofGetHeight()/1, fft[i]*75);

//  ofSetColor(0, 0, 0);
//  ofFill();
//  ofDrawCircle(ofGetWidth()/2.75, ofGetHeight()/1, fft[i]*75);

//  ofSetColor(0, 0, 0);
//  ofFill();
//  ofDrawCircle(ofGetWidth()/1.50, ofGetHeight()/1000, fft[i]*75);

//  ofSetColor(0, 0, 0);
//  ofFill();
//  ofDrawCircle(ofGetWidth()/2.75, ofGetHeight()/1000, fft[i]*75);

  }
}
//--------------------------------------------------------------
void ofApp::exit(){

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
  drawVideo = !drawVideo; // Toggle video drawing
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

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
