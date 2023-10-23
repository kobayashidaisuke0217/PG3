#pragma once
#include "IZoo.h"
class Cat:public IZoo
{
public:
	~Cat()override;
	void Initialize()override;
	void Update()override;
	void Draw()override;
	void Cry()override;
private:
   const char* name_;

};

