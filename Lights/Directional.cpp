//
//  Directional.cpp
//  TinyRay
//
//  Created by eyefrog on 15/7/31.
//  Copyright (c) 2015年 eyefrog. All rights reserved.
//

#include "Directional.h"

Directional::Directional(void)
		:
		Light(),
		ls(1.0),
		color(1.0),
		dir(0, 1, 0) { }

Directional::Directional(const Directional& dl)
		:
		Light(dl),
		ls(dl.ls),
		color(dl.color),
		dir(dl.dir) { }

Light*
Directional::clone(void) const
{
	return new Directional(*this);
}

Directional&
Directional::operator=(const Directional& rhs)
{
	if (this==&rhs) {
		return *this;
	}

	Light::operator=(rhs);

	ls = rhs.ls;
	color = rhs.color;
	dir = rhs.dir;

	return *this;
}

Directional::~Directional() { }

Vector3D
Directional::get_direction(ShadeRec& sr)
{
	return dir;
}

RGBColor
Directional::L(ShadeRec& s)
{
	return ls*color;
}

bool
Directional::in_shadow(const Ray& ray, const ShadeRec& sr) const
{
	return false;
}