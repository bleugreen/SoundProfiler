//
//  Display.h
//  SoundProfiler
//
//  Created by Mitch on 12/29/20.
//
#include "ofxGuiExtended.h"
#include "utils.h"

#ifndef Display_h
#define Display_h

class Display{
public:
    virtual void draw() = 0;
    virtual void update() = 0;
    virtual void setup() = 0;
    virtual void setDimensions(int w, int h) = 0;
    
    ofParameterGroup parameters;
    ofxGuiGroup *group;
    std::vector<utils::soundType> dataRequest;
    
protected:
    std::string name;
    int width, height;
    
};

#endif /* Display_h */