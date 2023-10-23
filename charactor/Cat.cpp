#include "Cat.h"
#include <stdio.h>
Cat::~Cat()
{
	printf("%sが去っていった\n", name_);
}
void Cat::Initialize()
{
	name_ = "猫";
	printf("%sが現れた\n", name_);
}

void Cat::Update()
{
}

void Cat::Draw()
{
	
}

void Cat::Cry()
{
	printf("%sの鳴き声はにゃあにゃあ\n", name_);
}

