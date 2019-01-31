#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    width = ofGetWindowSize().x;
    height = ofGetWindowSize().y;
    ofSetBackgroundColor(108, 209, 229);
    cout << ofGetViewportWidth() << "/n";
    cout << width;
    ofSetCurveResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){
    inc += 0.05;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (float i = 0; i <100; i++) {
//        ofDrawCircle(width/2, i*20+20*ofNoise(inc), 20); was a line of circles that moved but didnt work with the aesthetic.
    }
    
    for (float i=0; i <100; i++) {
        ofNoFill();
        ofSetColor(255, 255, 255);
       
        ofDrawBezier(0, height/2+i*10, 250, mouseY, 500+i*10, height-mouseY, width, height/2);
    }
    ofSetColor(0,0,255);
    ofFill();
    ofDrawRectangle(10,10,-100, 80, 80);
    ofSetColor(0,128,255);
    ofFill();
    ofDrawRectangle(10,100,-100, 80, 80);
    ofSetColor(51,153,255);
    ofFill();
    ofDrawRectangle(10,190,-100, 80, 80);
    ofSetColor(102,178,255);
    ofFill();
    ofDrawRectangle(10,280,-100, 80, 80);// Draw a rectangle.
    ofSetColor(153,204,255);
    ofFill();
    ofDrawRectangle(10,370,-100, 80, 80);
    ofSetColor(204,229,255);
    ofFill();
    ofDrawRectangle(10,460,-100, 80, 80);
    ofSetColor(204,255,255);
    ofFill();
    ofDrawRectangle(10,550,-100, 80, 80);
    ofSetColor(153,255,255);
    ofFill();
    ofDrawRectangle(10,640,-100, 80, 80);
    ofSetColor(51,255,255);
    ofFill();
    ofDrawRectangle(280,640,-100, 80, 80);
    ofSetColor(153,255,255);
    ofFill();
    ofDrawRectangle(100,640,-100, 80, 80);
    ofSetColor(102,255,255);
    ofFill();
    ofDrawRectangle(190,640,-100, 80, 80);
    ofEnableAlphaBlending();    // turn on alpha blending
    ofSetColor(102,178,255,127);
    ofFill();
    ofDrawRectangle(100,100,-100, 900, 530);
    ofDisableAlphaBlending(); // turn off alpha blending
    ofSetColor(102,178,255);
    ofFill();
    ofDrawRectangle(100,10,-100, 900, 80);
    ofSetColor(255,255,255);
    
    ofDrawBitmapString("Hello and welcome..., Please enter number.", 200, 100);
    ofDrawBitmapString("SampleTextSampleTextSampleTextSampleTextSampleTextSampleText", 200, 200);
    ofDrawBitmapString("SampleTextSampleTextSampleTextSampleTextSampleTextSampleText", 200, 300);
    ofDrawBitmapString("SampleTextSampleTextSampleTextSampleTextSampleTextSampleText", 200, 400);
    ofDrawBitmapString("SampleTextSampleTextSampleTextSampleTextSampleTextSampleText", 200, 500);
   
    
    
}

//--------------------------------------------------------------


//--------------------------------------------------------------
