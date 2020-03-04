#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	//Getting window width and height:
	float width;
	float height;
	width = ofGetWidth();
	height = ofGetHeight();
	// Big Bird : ***

	float birdLocaX;
	float birdLocaY;
	birdLocaX = width / 4;
	birdLocaY = height / 4;

	float hBird = 400;
	float wBird = 500;
	int degrees = 0;

	ofVec2f birdP1(width / 4, height / 4), orbit;
	ofVec2f  birdP2;
	ofVec2f birdP3(width*0.75, height * 3 / 4);
	birdP1.set(width / 4, height / 4);
	birdP2.set(birdP1.x, birdP1.y + hBird);
	birdP3.set(birdP1.x+wBird,birdP2.y);
	
	ofSetColor(242, 195, 127);
	ofFill();
	

	orbit = birdP1.rotate(degrees++, birdP1);


	ofDrawTriangle(birdP1++, birdP2, birdP3);
	//ofDrawTriangle(orbit, birdP2, birdP3);
	//ofDrawTriangle(width / 4, height / 4, width / 4, height * 3 / 4, width*0.75, height * 3 / 4);

	//Eye:

	ofSetColor(0, 0, 0);
	ofFill();
	ofDrawCircle(width / 4 + 30, height / 3 + 30, 5);

	//Beak:
	ofSetColor(240, 134, 57);
	ofFill();
	ofDrawTriangle(width / 4, height / 3, width / 4 - 60, height / 3 + 50, width / 4 + 20, height / 3 + 50);


	cout << "Thing 1 is drawn" << endl;


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
