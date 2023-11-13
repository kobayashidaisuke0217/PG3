#include "RectAngle.h"
#include <stdio.h>
Rectangle::~Rectangle()
{
	
}

void Rectangle::Initialize(float radian)
{
	this->radian_ = radian;
}



void Rectangle::Update()
{
}

void Rectangle::Draw()
{
	printf("矩形の面積は%f\n",size_);
}

void Rectangle::Size()
{
	size_ = radian_ * radian_;
}

