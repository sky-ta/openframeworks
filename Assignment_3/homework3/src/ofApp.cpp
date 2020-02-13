#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60); //60 frames/sec
	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	//Getting current frame number:
	int x;
	x = (ofGetFrameNum()/450)%4; //currentFrameNumber/120 => every 2 second; % 4 => max of x value for every 4 things
	//x = (ofGetFrameNum() / 1800) % 4; //currentFrameNumber/120 => every 30 second; % 4 => max of x value for every 4 things

	cout << x << endl;

	//Getting window width and height:
	float width;
	float height;
	width = ofGetWidth();
	height = ofGetHeight();
	//cout << "Width window: " << width << endl;
	//cout << "Height window: " << height << endl;

	//*****

	//When an amount of second has passed (x), draw this shape:
	if (x == 0) {
		//Drawing the Circle in the middle of window (thing 1):
		ofSetColor(194, 252, 250);
		ofFill();
		ofDrawCircle(width / 2, height / 2, 300);
		cout << "Thing 1 is drawn" << endl;
	}

	if (x == 1) {
		//Drawing Triangle in the middle of window (thing 2):
		ofSetColor(255, 175, 84);
		ofFill();
		ofDrawTriangle(width / 2, height / 6, width / 4, height*0.75, width*0.75, height*.75); //ofDrawTriangle(float x1, float y1, float x2, float y2, float x3, float y3)
		cout << "Thing 2 is drawn" << endl;
	}

	if (x == 2) {
		//Drawing Rectangle in the middle of window (thing 3):
		ofSetColor(201, 255, 84);
		ofFill();

		ofRectangle rect;
		rect.x = width / 2;
		rect.y = height / 2;
		rect.width = width / 2;
		rect.height = width / 3;

		ofSetRectMode(OF_RECTMODE_CENTER);
		ofDrawRectangle(rect);
		cout << "Thing 3 is drawn" << endl;
	}

	if (x == 3) {
		//Drawing Elipse in the middle of window (thing 4):
		ofSetColor(255, 158, 179);
		ofFill();
		ofDrawEllipse(width / 2, height / 2, width / 2, height / 2);
		//ofDrawEllipse(float x, float y, float width, float height);
		cout << "Thing 4 is drawn" << endl;
	}


	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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