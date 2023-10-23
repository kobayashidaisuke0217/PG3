#pragma once
class IZoo
{
public:
	IZoo();
	virtual~IZoo() {};
	virtual void Initialize()=0;
	virtual void Update()=0;
	virtual void Draw()=0;
	virtual void Cry() = 0;
private:
	
};

