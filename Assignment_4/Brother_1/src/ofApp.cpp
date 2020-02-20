#include "ofApp.h"
bool eyeMode1;
bool eyeMode2;
//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60); //60 frames/sec
	//counter = 0;
	ofSetWindowTitle("Brother 1");
	//boolean
	eyeMode1 = false;
	eyeMode2 = false;
	
}

//--------------------------------------------------------------
void ofApp::update(){
	//counter = counter +  0.03f;
}

//--------------------------------------------------------------
void ofApp::draw(){
	//Time Passed:
	int timeH;
	int mood;
	timeH = ofGetFrameNum() / 120;
	mood = timeH % 4;
	
	cout << "Current mood: " <<mood << endl;
	//width/height:
	float width;
	float height;
	width = ofGetWidth();
	height = ofGetHeight();
	//Background Color:
	ofColor colorOne(250, 250, 250);
	ofColor colorTwo(180, 180, 180);

	ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_LINEAR);
	//DRAWINGS________________________________________
	//Dude 1:
	float x0h1, x1h1, x2h1, x3h1; //hand1
	float y0h1, y1h1, y2h1, y3h1;
	float x0cur, x1cur, x2cur, x3cur; //mouth
	float y0cur, y1cur, y2cur, y3cur;

	//Hair:
	ofSetColor(136,198,255);
	ofFill();
	ofDrawCircle(width / 2, height / 3, 100);
	//Hands:
	ofSetColor(0, 0, 0);
	ofNoFill();

	x1h1 = width/2 -100;
	y1h1 = height / 2;
	x2h1 = width/2+100;
	y2h1 = height / 2;

	ofDrawLine(x1h1, y1h1, x2h1, y2h1);
	//Body:
	ofSetColor(101,154,233);
	ofFill();
	ofDrawTriangle(width/2, height / 3, width/2 -80, height * 3 / 4, width/2+80, height * 3 / 4);
	
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
	//Eyes:
	if (eyeMode1 == true) {
		ofSetColor(0, 0, 0);
		ofFill();
		ofDrawCircle(width / 2 - 10, height / 2.4, 3);
		ofDrawCircle(width / 2 + 10, height / 2.4, 3);
		//eyeMode2 = false;
	}
	if (eyeMode2 == true) {
		ofSetColor(0, 0, 0);
		ofFill();
		ofDrawCircle(width / 2 - 10, height / 2.4, 2);
		ofDrawCircle(width / 2 + 10, height / 2.4, 4);
	}

	//HAPPY:
	if (mood == 0) {
		//Mouth happy:
		ofSetColor(0, 0, 0);
		ofFill();
		eyeMode1 = true;
		eyeMode2 = false;
		x0cur = width / 2 - 5;
		y0cur = height / 2.6;
		x1cur = width / 2 - 10;
		y1cur = height / 2.2;
		x2cur = width / 2 + 10;
		y2cur = height / 2.2;
		x3cur = width / 2 + 5;
		y3cur = height / 2.6;
		ofDrawCurve(x0cur,y0cur, x1cur, y1cur, x2cur, y2cur, x3cur, y3cur);

	}
	//SAD:
	if (mood == 1) {
		eyeMode1 = true; //eyes
		eyeMode2 = false;
		//Mouth Sad:
		ofSetColor(0, 0, 0);
		ofFill();
		x0cur = width / 2 - 5;
		y0cur = height / 1.9;

		x1cur = width / 2 - 10;
		y1cur = height / 2.1;
		x2cur = width / 2 + 10;
		y2cur = height / 2.1;

		x3cur = width / 2 + 5;
		y3cur = height / 1.9;

		ofDrawCurve(x0cur,y0cur, x1cur, y1cur, x2cur, y2cur, x3cur, y3cur);
	}
	//SURPRISED:

	if (mood == 2) {
		eyeMode1 = false; //eyes
		eyeMode2 = true;

		ofSetColor(0, 0, 0);
		ofFill();
		ofDrawEllipse(width / 2, height / 2 - 15, 35, 25); //mouth
	}


	//ANNGRY:
	if (mood == 3) {
		ofSetColor(0, 0, 0);
		ofFill();
		float dif1 = 13;
		float dif2 = 4;
		ofDrawLine(width / 2 - dif1, height / 2.6, width / 2 - dif2, height / 2.5); //brows
		ofDrawLine(width / 2 + dif1, height / 2.6, width / 2 + dif2, height / 2.5); //brows

		eyeMode1 = false; //eyes
		eyeMode2 = true;
		//mouth:
		x0cur = width / 2 - 5;
		y0cur = height / 1.7;

		x1cur = width / 2 - 10;
		y1cur = height / 2.1;
		x2cur = width / 2 + 10;
		y2cur = height / 2.1;

		x3cur = width / 2 + 5;
		y3cur = height / 1.9;
		ofDrawCurve(x0cur, y0cur, x1cur, y1cur, x2cur, y2cur, x3cur, y3cur);
	}
	
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
