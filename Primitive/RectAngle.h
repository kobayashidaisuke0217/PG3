#pragma once
#include "IShape.h"
class Rectangle :public IShape
{
public:
	~Rectangle()override;
	void Initialize(float radian)override;
	void Update()override;
	void Draw()override;
	void Size()override;
private:
	float radian_;

};