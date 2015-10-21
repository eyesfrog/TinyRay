//
//  Light.cpp
//  TinyRay
//
//  Created by eyefrog on 15/7/31.
//  Copyright (c) 2015年 eyefrog. All rights reserved.
//

#include "Light.h"

#include "Constants.h"

Light::Light(void):
    shadows(false)
{}

Light::Light(const Light& ls) {}

Light&
Light::operator=(const Light &rhs)
{
    if (this == &rhs) {
        return *this;
    }
    
    return *this;
}

Light::~Light() {}

RGBColor
Light::L(ShadeRec &sr)
{
    return black;
}