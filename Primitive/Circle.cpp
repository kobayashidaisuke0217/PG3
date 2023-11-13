#include "Circle.h"
#include <stdio.h>
Circle::~Circle()
{

}

	void Circle::Initialize(float radian)
	{
		this->radian_ = radian;
	}

	void Circle::Update()
{
}

void Circle::Draw()
{
	printf("円の面積は%f\n", size_);
}

void Circle::Size()
{
	size_ = radian_ * radian_ * 3.141592f;
}

