#include <stdio.h>
#include <iostream>
#include <memory>
#include "Primitive/Circle.h"
#include "Primitive/IShape.h"
#include "Primitive/Rectangle.h"

using namespace std;
int main() {
	unique_ptr<IShape> shape[2];
	shape[0] = make_unique<Rectangle>();
	shape[1] = make_unique<Circle>();
	for (int i = 0; i < 2; i++) {
		shape[i]->Initialize(4.0f);
	}
	for (int i = 0; i < 2; i++) {
		shape[i]->Size();
		shape[i]->Draw();
	}
	return 0;
}