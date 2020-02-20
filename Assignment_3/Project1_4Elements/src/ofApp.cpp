#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetFrameRate(60); //60 frames/sec

}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	//Getting current frame number:
	int x;
	x = (ofGetFrameNum() / 120) % 2; //currentFrameNumber/120 => every 2 second; % 4 => max of x value for every 4 things
	//x = (ofGetFrameNum() / 1800) % 4; //currentFrameNumber/120 => every 30 second; % 4 => max of x value for every 4 things

	cout << x << endl;

	//Getting window width and height:
	float width;
	float height;
	width = ofGetWidth();
	height = ofGetHeight();
	//cout << "Width window: " << width << endl;
	//cout << "Height window: " << height << endl;

	//Background Color:
	ofColor colorOne(250, 250, 250);
	ofColor colorTwo(180, 180, 180);

	ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_LINEAR);

	//*****

	//When an amount of second has passed (x), draw this shape:
	if (x == 0) {
		//Big Bird:***
		//Body:
		ofSetColor(242, 195, 127);
		ofFill();
		ofDrawTriangle(width / 4, height / 4, width / 4, height * 3 / 4, width*0.75, height * 3 / 4);
		//Eye:
		
		ofSetColor(0, 0, 0);
		ofFill();
		ofDrawCircle(width / 4 + 30, height / 3+30, 5);
		
		//Beak:
		ofSetColor(240, 134, 57);
		ofFill();
		ofDrawTriangle(width / 4, height / 3, width / 4 -60, height/3+50, width/4+20, height / 3 + 50);
		

		cout << "Thing 1 is drawn" << endl;

	}

	if (x == 1) {
		//Dude 1:***
		float x0h1, x1h1, x2h1, x3h1; //hand1
		float y0h1, y1h1, y2h1, y3h1;
		float x0cur, x1cur, x2cur, x3cur; //mouth
		float y0cur, y1cur, y2cur, y3cur;

		//Hair:
		//ofSetColor(117,81,69);
		ofSetColor(136, 198, 255);
		ofFill();
		ofDrawCircle(width / 2, height / 3, 100);
		//Hands:
		ofSetColor(0, 0, 0);
		ofNoFill();

		x1h1 = width / 2 - 100;
		y1h1 = height / 2;
		x2h1 = width / 2 + 100;
		y2h1 = height / 2;

		ofDrawLine(x1h1, y1h1, x2h1, y2h1);
		//Body:
		//ofSetColor(194, 127, 101);
		ofSetColor(101, 154, 233);
		ofFill();
		ofDrawTriangle(width / 2, height / 3, width / 2 - 80, height * 3 / 4, width / 2 + 80, height * 3 / 4);

		//Eyes:
		ofSetColor(0, 0, 0);
		ofFill();
		ofDrawCircle(width / 2 - 10, height / 2.4, 3);
		ofDrawCircle(width / 2 + 10, height / 2.4, 3);
		//Nose:
		ofSetColor(213, 41, 89);
		ofFill();
		ofRectangle myRect;
		myRect.x = width / 2;
		myRect.y = height / 2.3;
		myRect.width = 10;
		myRect.height = 20;
		ofSetRectMode(OF_RECTMODE_CENTER);

		ofDrawRectRounded(myRect, 10);
		//Mouth:
		ofSetColor(0, 0, 0);
		ofFill();
		x0cur = width / 2 - 5;
		y0cur = height / 2.6;
		x1cur = width / 2 - 10;
		y1cur = height / 2.2;
		x2cur = width / 2 + 10;
		y2cur = height / 2.2;
		x3cur = width / 2 + 5;
		y3cur = height / 2.6;

		ofDrawCurve(x0cur, y0cur, x1cur, y1cur, x2cur, y2cur, x3cur, y3cur);


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
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}