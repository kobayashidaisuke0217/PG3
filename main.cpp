#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <functional>
#include"Enemy/Enemy.h"

int main() {
	
	Enemy* enemy_ = new Enemy();
	enemy_->Initialize();
	enemy_->Update();
	delete enemy_;
	return 0;
}