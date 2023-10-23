#include "Cat.h"
#include <stdio.h>
Cat::~Cat()
{
	printf("%s‚ª‹‚Á‚Ä‚¢‚Á‚½\n", name_);
}
void Cat::Initialize()
{
	name_ = "”L";
	printf("%s‚ªŒ»‚ê‚½\n", name_);
}

void Cat::Update()
{
}

void Cat::Draw()
{
	
}

void Cat::Cry()
{
	printf("%s‚Ì–Â‚«º‚Í‚É‚á‚ ‚É‚á‚ \n", name_);
}

