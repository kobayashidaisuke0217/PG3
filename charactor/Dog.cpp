#include "Dog.h"
#include <stdio.h>
Dog::~Dog()
{
	printf("%s‚ª‹‚Á‚Ä‚¢‚Á‚½\n", name_);
}

void Dog::Initialize()
{
	name_ = "Œ¢";
	printf("%s‚ªŒ»‚ê‚½\n", name_);
}

void Dog::Update()
{
}

void Dog::Draw()
{
}

void Dog::Cry()
{
	printf("%s‚Ì–Â‚«º‚Í‚í‚ñ‚í‚ñ\n", name_);
}

