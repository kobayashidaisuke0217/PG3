#pragma once
#include "IShape.h"
class Circle:public IShape
{
public:
	~Circle()override;
	void Initialize(float radian)override;
	void Update()override;
	void Draw()override;
	void Size()override;
private:
	float radian_;
};

