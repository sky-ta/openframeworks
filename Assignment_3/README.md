# Assignment_3

## Description
 
## API Research
Find the following methods in the API documentation.  For each tell us what it does, the (easiest) arguments it takes , and (if relevant) what it returns.
Team 3: ofDrawBezier() ofDrawTriangle() ofSetFrameRate()  ofSetColor()  
1. [ofDrawBezier()](https://openframeworks.cc/documentation/graphics/ofGraphics/#show_ofDrawBezier "ofDrawBezier() Method") draws curves, similar to the pen tool in Photoshop. The argument it takes is floats.
```
void ofDrawBezier(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3);  
        
void ofDrawBezier(float x0, float y0, float z0, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);
```  
2. [ofDrawTriangle()](https://openframeworks.cc/documentation/graphics/ofGraphics/#show_ofDrawTriangle "ofDrawTriangle() Method") draws triangles. The arguments it takes are float and vector.  
```
void ofDrawTriangle(const glm::vec3 &p1, const glm::vec3 &p2, const glm::vec3 &p3);

void ofDrawTriangle(const glm::vec2 &p1, const glm::vec2 &p2, const glm::vec2 &p3);

void ofDrawTriangle(float x1, float y1, float x2, float y2, float x3, float y3);

void ofDrawTriangle(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);
```
3. [ofSetFrameRate()](https://openframeworks.cc//documentation/application/ofAppRunner/#!show_ofSetFrameRate "ofSetFrameRate() Method") sets the frame rate to a target, making it wait an amount of time before producing next frame. The argument it takes is integer.  
```
void ofSetFrameRate(int targetRate);

```
4. [ofSetColor()](https://openframeworks.cc//documentation/graphics/ofGraphics/#!show_ofSetColor "ofSetColor() Method") sets the draw color and transparency. The arguments it takes are integers for r,g,b values, hex number, or word of color (e.g: gray).  
```
void ofSetColor(const ofColor &color);

void ofSetColor(const ofColor &color, int _a);

void ofSetColor(int gray);

void ofSetColor(int r, int g, int b);

void ofSetColor(int r, int g, int b, int a);
```

