#pragma once
#include "PlaceableActor.h"

class Key;
class Sword;

class Player : public PlaceableActor
{
public:
	Player();

	bool HasSword();
	bool HasKey();
	bool HasKey(ActorColor color);
	void PickupKey(Key* key);
	void PickupSword(Sword* sword);
	void UseKey();
	void DropKey();
	Key* GetKey() { return m_pCurrentKey; }
	Sword* GetSword() { return m_pSword;  }
	void AddMoney(int money) { m_money += money; }
	int GetMoney() { return m_money; }

	int GetLives() { return m_lives; }
	void DecrementLives() { m_lives--; }

	virtual ActorType GetType() override { return ActorType::Player; }
	virtual void Draw() override;
private:
	Key* m_pCurrentKey;
	Sword* m_pSword;
	int m_money;
	int m_lives;
};
