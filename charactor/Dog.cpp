#include "Dog.h"
#include <stdio.h>
Dog::~Dog()
{
	printf("%sが去っていった\n", name_);
}

void Dog::Initialize()
{
	name_ = "犬";
	printf("%sが現れた\n", name_);
}

void Dog::Update()
{
}

void Dog::Draw()
{
}

void Dog::Cry()
{
	printf("%sの鳴き声はわんわん\n", name_);
}

