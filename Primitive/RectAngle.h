#pragma once
#include "IShape.h"
class RectAngle :public IShape
{
public:
	~RectAngle()override;
	void Initialize(float radian)override;
	void Update()override;
	void Draw()override;
	void Size()override;
private:
	float radian_;

};