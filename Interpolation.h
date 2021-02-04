//
//  Interpolation.h
//  SDKExample (Upgraded)
//
//  Created by Si Mills on 04/02/2021.
//

#ifndef Interpolation_h
#define Interpolation_h

inline float linearInterpolate(float y0, float y1, double currentX) {
    float interpolatedValue;
    float scaleValue = currentX - (int)currentX;
    
    interpolatedValue = (y0 * (1 - scaleValue)) + (y1 * scaleValue);
    return interpolatedValue;
};

inline float cubicInterpolate(float y0, float y1, float y2, float y3, double currentX) {
    float interpolatedValue = 0;
//    float scaleValue = currentX - (int)currentX;
//    
//    interpolatedValue = (y0 * (1 - scaleValue)) + (y1 * scaleValue);
    return interpolatedValue;
};




#endif /* Interpolation_h */
