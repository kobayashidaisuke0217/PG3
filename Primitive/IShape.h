#pragma once
class IShape
{
public:
	IShape();
	virtual~IShape() {};
	virtual void Initialize(float radian)=0;
	virtual void Update()=0;
	virtual void Draw()=0;
	virtual void Size() = 0;
private:
protected:
	float size_;
};

