#include "Cat.h"
#include <stdio.h>
Cat::~Cat()
{
	printf("%s�������Ă�����\n", name_);
}
void Cat::Initialize()
{
	name_ = "�L";
	printf("%s�����ꂽ\n", name_);
}

void Cat::Update()
{
}

void Cat::Draw()
{
	
}

void Cat::Cry()
{
	printf("%s�̖����͂ɂႠ�ɂႠ\n", name_);
}

