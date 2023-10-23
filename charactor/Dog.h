#pragma once
#include "IZoo.h"
class Dog :public IZoo
{
public:
	~Dog()override;
	void Initialize()override;
	void Update()override;
	void Draw()override;
	void Cry()override;
private:
	const char* name_;

};