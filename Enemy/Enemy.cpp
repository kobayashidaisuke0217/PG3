#include "Enemy.h"
void (Enemy::* Enemy::statePatternTable[])() = {
	&Enemy::Approach,
	&Enemy::Fire,
	&Enemy::Leave
};

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
	printf("敵は去っていった");
}

void Enemy::Initialize()
{
	Phase = 0;
}

void Enemy::Update() {
	while (Phase <= 3) {
		switch (Phase ) {
		case static_cast<size_t>(Enemy::State::kApproach):
			(this->*statePatternTable[static_cast<size_t>(State::kApproach)])();
			break;

		case static_cast<size_t>(Enemy::State::kFire):
			(this->*statePatternTable[static_cast<size_t>(State::kFire)])();
			break;

		case static_cast<size_t>(Enemy::State::kLeave):
			(this->*statePatternTable[static_cast<size_t>(State::kLeave)])();
			break;
		default :
			return ;
			break;
		}
	}
}

void Enemy::BehaviorChange() {
	
	Phase += 1;
    Sleep(3000);
	if (Phase < 3) {
		
		printf("フェーズ切り替え\n");
		Sleep(3000);
	}
	
}

void Enemy::Approach() {
	printf( "接近フェーズ\n");
	BehaviorChange();
}

void Enemy::Fire() {
	printf("攻撃フェーズ\n");
	BehaviorChange();
}

void Enemy::Leave() {
	printf("離脱フェーズ\n");
	BehaviorChange();
}