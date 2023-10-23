#include <stdio.h>
#include <iostream>
#include <memory>
#include "charactor/Cat.h"
#include "charactor/IZoo.h"
#include "charactor/Dog.h"

using namespace std;
int main() {
	unique_ptr<IZoo> zoo[2];
	zoo[0] = make_unique<Cat>();
	zoo[1] = make_unique<Dog>();
	for (int i = 0; i < 2; i++) {
		zoo[i]->Initialize();
	}
	for (int i = 0; i < 2; i++) {
		zoo[i]->Cry();
	}
	return 0;
}