#include "RectAngle.h"
#include <stdio.h>
RectAngle::~RectAngle()
{
	
}

void RectAngle::Initialize(float radian)
{
	this->radian_ = radian;
}



void RectAngle::Update()
{
}

void RectAngle::Draw()
{
	printf("矩形の面積は%f\n",size_);
}

void RectAngle::Size()
{
	size_ = radian_ * radian_;
}

