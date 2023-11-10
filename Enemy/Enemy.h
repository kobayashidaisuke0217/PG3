#pragma once
#include <stdio.h>
#include <windows.h>
using namespace std;

class Enemy
{
public:
	enum class State {
		kApproach,
		kFire,
		kLeave,
	};

public:
	Enemy();
	~Enemy();
	void Initialize();
	void Update();
	void BehaviorChange();

private:
	void Approach();
	void Fire();
	void Leave();

	static void (Enemy::* statePatternTable[])();

	int Phase = 0;
};

