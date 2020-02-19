# Assignment_3

## Description
The following includes:
1. Concept descriptions and sketches for the 3 projects.
2. API Reseach (Team 3)

- - - -
### 3 Project Concepts
#### Project 1
For this project, I will be using simple shapes to visualizes a Vietnamese folktale, "Fruit for Gold" or "The Golden Starfruit Tree" ([link](https://truyenco.com/an-khe-tra-vang-a229.html "An Khe Tra Vang")). In the story, there are two brothers. One is hardworking and humble, while the other is greedy. One day, a magical bird came and ask for the fruits of a tree in their garden with a promise of wealth in exchange.  

The audience of this story is young childen, age 5+. In the folktale, the are two brothers. The audience are able to choose one character (one of the brothers) and experience the story.  

Sketches:  
    <img src="/Assignment_3/images/project1_sketches.jpg" alt="Project1_Sketch" width="30%"/>\
Designs:  
    <img src="/Assignment_3/images/project1_bird.jpg" alt="Project1_BigBird" width="40%"/>
    <img src="/Assignment_3/images/project1_2brothers.jpg" alt="Project1_Brothers" width="40%"/>\
    <img src="/Assignment_3/images/project1_home_tree.jpg" alt="Project1_Home_and_Tree" width="40%"/>
    <img src="/Assignment_3/images/project1_treasure_island.jpg" alt="Project1_TreasureIsland" width="40%"/>

#### Project 2

Sketches:  
    <img src="/Assignment_3/images/project2" alt="Project1_Sketch" width="30%"/>\
Designs:  
    <img src="/Assignment_3/images/" alt="Project1_BigBird" width="40%"/>


#### Project 3
I plan to use it as an extension to my Thesis project, a projected interactable object. I will be using a projector and some interactable element for the project (vibration sensor or Kinect). The visual of the project is calming and cathartic.  

The audience of the project are people who seek a calm space while experience big transitions in their life (16+, students, young adults). They will be able to interact with the visual through said technology (movement ditection).

Sketches:  
    <img src="/Assignment_3/images/project3_sketches.jpg" alt="Project1_Sketch" width="30%"/>\
Designs:  
    <img src="/Assignment_3/images/project3_plan1_image1.jpg" alt="Project1_BigBird" width="40%"/>
    <img src="/Assignment_3/images/project3_plan1_image2.jpg" alt="Project1_BigBird" width="40%"/>\
    <img src="/Assignment_3/images/project3_plan2_image1.jpg" alt="Project1_BigBird" width="40%"/>
    <img src="/Assignment_3/images/project3_plan2_image2.jpg" alt="Project1_BigBird" width="40%"/>\
    
    <img src="/Assignment_3/images/" alt="Project1_Sketch" width="30%"/>\

- - - -
### API Research
Team 3:  
I  attempted the 30-sec example but wasn't able to display 3D primitive shapes and get ofGetFrameNum() to work. I was able to display static 2D shapes like the GIFs bellow:  
![Speeded up by an image/2sec](/Assignment_3/images/team_3_fast.gif)  
Full 30 sec example:
![Final Product](/Assignment_3/images/team_3_normal30sec.gif)  


Four methods and what they do, their aguments, and returns (if relevant).  
- [ofDrawBezier()](https://openframeworks.cc/documentation/graphics/ofGraphics/#show_ofDrawBezier "ofDrawBezier() Method") draws curves, similar to the pen tool in Photoshop. The argument it takes is floats.
```
void ofDrawBezier(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3);  
        
void ofDrawBezier(float x0, float y0, float z0, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);
```  
- [ofDrawTriangle()](https://openframeworks.cc/documentation/graphics/ofGraphics/#show_ofDrawTriangle "ofDrawTriangle() Method") draws triangles. The arguments it takes are float and vector.  
```
void ofDrawTriangle(const glm::vec3 &p1, const glm::vec3 &p2, const glm::vec3 &p3);

void ofDrawTriangle(const glm::vec2 &p1, const glm::vec2 &p2, const glm::vec2 &p3);

void ofDrawTriangle(float x1, float y1, float x2, float y2, float x3, float y3);

void ofDrawTriangle(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);
```
- [ofSetFrameRate()](https://openframeworks.cc//documentation/application/ofAppRunner/#!show_ofSetFrameRate "ofSetFrameRate() Method") sets the frame rate to a target, making it wait an amount of time before producing next frame. The argument it takes is integer.  
```
void ofSetFrameRate(int targetRate);

```
- [ofSetColor()](https://openframeworks.cc//documentation/graphics/ofGraphics/#!show_ofSetColor "ofSetColor() Method") sets the draw color and transparency. The arguments it takes are integers for r,g,b values, hex number, or word of color (e.g: gray).  
```
void ofSetColor(const ofColor &color);

void ofSetColor(const ofColor &color, int _a);

void ofSetColor(int gray);

void ofSetColor(int r, int g, int b);

void ofSetColor(int r, int g, int b, int a);
```

