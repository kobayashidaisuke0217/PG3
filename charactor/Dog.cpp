#include "Dog.h"
#include <stdio.h>
Dog::~Dog()
{
	printf("%s�������Ă�����\n", name_);
}

void Dog::Initialize()
{
	name_ = "��";
	printf("%s�����ꂽ\n", name_);
}

void Dog::Update()
{
}

void Dog::Draw()
{
}

void Dog::Cry()
{
	printf("%s�̖����͂����\n", name_);
}

