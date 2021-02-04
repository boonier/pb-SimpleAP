#ifndef Interpolation_h
#define Interpolation_h

inline float linearInterpolate(float y0, float y1, float currentX) {
    float scaleValue = currentX - (int)currentX;
    
    return (y0 * (1 - scaleValue)) + (y1 * scaleValue);
};

inline float cubicInterpolate(float y0, float y1, float y2, float y3, float currentX) {
    float a = (-0.5*y0) + (1.5*y1) - (1.5*y2) + (0.5*y3);
    float b = (y0) - (2.5*y1) + (2*y2) - (0.5*y3);
    float c = (-0.5*y0) + (0.5*y2);
    float d = y1;
    
    float xOff = currentX - (int)currentX;
    
    return (a*pow(xOff, 3)) + b*(pow(xOff, 2)) + (c*xOff) + d;
};




#endif /* Interpolation_h */
